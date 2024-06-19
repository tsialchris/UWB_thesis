#define NRF_LOG_MODULE_NAME battery
#define NRF_LOG_LEVEL 0

#include "contiki.h"

#include "nrf_log.h"
#include "nrf_drv_saadc.h"

#include "battery_read.h"

NRF_LOG_MODULE_REGISTER();

#define FS_VALUE 3600 /* max value readable: is internal reference * ADC gain = 0,6V * 6 */
#define ADC_RES 4096 /* in nrfx_config SAADC is configured for 12 bit resolution */


static bool m_initialized = false;
static battery_read_callback_t m_callback = NULL;

static nrf_saadc_value_t adc_buf[2];

static void saadc_callback(nrfx_saadc_evt_t const * p_event);

uint8_t
battery_read_init(battery_read_callback_t cb)
{
  if(m_initialized)
    return -1;

  m_callback = cb;
  m_initialized = true;
  return 0;
}

uint8_t
battery_read_start()
{
  ret_code_t err_code;

  if(!m_initialized)
    return -1;

  err_code = nrf_drv_saadc_init(NULL, saadc_callback);
  APP_ERROR_CHECK(err_code);

  nrf_saadc_channel_config_t config =
    NRF_DRV_SAADC_DEFAULT_CHANNEL_CONFIG_SE(NRF_SAADC_INPUT_VDD);
  err_code = nrf_drv_saadc_channel_init(0, &config);
  APP_ERROR_CHECK(err_code);

  err_code = nrf_drv_saadc_buffer_convert(&adc_buf[0], 1);
  APP_ERROR_CHECK(err_code);

  err_code = nrf_drv_saadc_buffer_convert(&adc_buf[1], 1);
  APP_ERROR_CHECK(err_code);


  err_code = nrf_drv_saadc_sample();
  APP_ERROR_CHECK(err_code);

  NRF_LOG_DEBUG("sample start %d", err_code);

  return 0;
}

void
saadc_callback(nrfx_saadc_evt_t const * p_event)
{
  uint32_t          err_code;

  NRF_LOG_DEBUG("saadc_cb %d",p_event->type);
  if (p_event->type == NRFX_SAADC_EVT_DONE)
    {

      nrf_saadc_value_t adc_result = p_event->data.done.p_buffer[0];

      err_code = nrf_drv_saadc_buffer_convert(p_event->data.done.p_buffer, 1);
      APP_ERROR_CHECK(err_code);

      nrf_drv_saadc_uninit();

      NRF_LOG_DEBUG("adc value %d", adc_result);

      uint16_t millivolts = ((uint32_t)adc_result) * FS_VALUE / ADC_RES;

      NRF_LOG_INFO("battery value %u", millivolts);

      if(m_callback)
	m_callback(millivolts);
    }
}
