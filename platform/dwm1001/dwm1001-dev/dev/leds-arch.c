/*
 * Copyright (c) 2015, Nordic Semiconductor
 * Copyright (c) 2018, University of Trento, Italy
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the Institute nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE INSTITUTE AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE INSTITUTE OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 */

/**
 * \addtogroup nrf52dk
 * @{
 *
 * \addtogroup nrf52dk-devices Device drivers
 * @{
 *
 * \addtogroup nrf52dk-devices-led LED driver
 * @{
 *
 * \file
 *         Architecture specific LED driver implementation for nRF52 DK.
 * \author
 *         Wojciech Bober <wojciech.bober@nordicsemi.no>
 */

#include "dwm1001-dev-board.h"

#include "nrf_gpio.h"

#include "contiki.h"
#include "dev/leds.h"
#include <stdio.h>

void
switch_leds_off(unsigned int mask) {
  NRF_GPIO->OUTSET = (DWM1001_LEDS_MASK & mask);
}

void
switch_leds_on(unsigned int mask) {
  NRF_GPIO->OUTCLR = (DWM1001_LEDS_MASK & mask);
}

/*---------------------------------------------------------------------------*/
void
leds_arch_init(void)
{
  nrf_gpio_cfg_output(DWM1001_LED_1);
  nrf_gpio_cfg_output(DWM1001_LED_2);
  nrf_gpio_cfg_output(DWM1001_LED_3);
  nrf_gpio_cfg_output(DWM1001_LED_4);

  switch_leds_off(DWM1001_LEDS_MASK);
}
/*---------------------------------------------------------------------------*/
unsigned char
leds_arch_get(void)
{
  unsigned int gpio = NRF_GPIO->OUT;
  unsigned char leds = 0;
  if(gpio & DWM1001_LED_1_MASK)
    leds |= LEDS_1;
  if(gpio & DWM1001_LED_2_MASK)
    leds |= LEDS_2;
  if(gpio & DWM1001_LED_3_MASK)
    leds |= LEDS_3;
  if(gpio & DWM1001_LED_4_MASK)
    leds |= LEDS_4;
  return leds;
}
/*---------------------------------------------------------------------------*/
void
leds_arch_set(unsigned char leds)
{
  unsigned int mask = 0;
  if(leds & LEDS_1)
    mask |= DWM1001_LED_1_MASK;
  if(leds & LEDS_2)
    mask |= DWM1001_LED_2_MASK;
  if(leds & LEDS_3)
    mask |= DWM1001_LED_3_MASK;
  if(leds & LEDS_4)
    mask |= DWM1001_LED_4_MASK;

  switch_leds_off(DWM1001_LEDS_MASK);
  switch_leds_on(mask);
}
/*---------------------------------------------------------------------------*/

/**
 * @}
 * @}
 * @}
 */
