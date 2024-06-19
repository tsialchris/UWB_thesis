#include "deployment.h"

const struct id_addr deployment_id_addr_list[] = {

    // Address-to-id mapping
    //
    // {node_id, {8-byte address}}
    { 1, {0x04, 0x32, 0x51, 0x02, 0x01, 0x64, 0x13, 0x9a}}, //DEPT
{ 2, {0x10, 0x20, 0x5f, 0x13, 0x10, 0x00, 0x19, 0x15}}, //DEPT
{ 3, {0x01, 0x3a, 0x61, 0x02, 0xc4, 0xc2, 0x11, 0x0c}}, //DEPT
{ 4, {0x04, 0x32, 0x51, 0x02, 0x41, 0x64, 0x12, 0x8a}}, //DEPT
{ 5, {0x04, 0x32, 0x51, 0x02, 0x41, 0x64, 0x11, 0xa3}}, //DEPT
{ 6, {0x04, 0x32, 0x51, 0x02, 0x01, 0x64, 0x10, 0x9b}}, //DEPT
{ 7, {0x10, 0x20, 0x5f, 0x13, 0x10, 0x00, 0x18, 0x33}}, //DEPT
{ 8, {0x04, 0x32, 0x51, 0x02, 0x41, 0x64, 0x10, 0x89}}, //DEPT
{ 9, {0x10, 0x20, 0x5e, 0xfe, 0x10, 0x00, 0x11, 0x4a}}, //DEPT
{10, {0x05, 0xc3, 0x22, 0x08, 0x4b, 0x94, 0xc8, 0x0c}}, //DEPT
{11, {0x10, 0x20, 0x5f, 0x13, 0x10, 0x00, 0x18, 0x32}}, //DEPT
{12, {0x04, 0x32, 0x51, 0x02, 0x41, 0x64, 0x17, 0x93}}, //DEPT
{13, {0x10, 0x20, 0x5e, 0xe6, 0x10, 0x00, 0x02, 0xd8}}, //DEPT
{14, {0x05, 0xc3, 0x22, 0x08, 0x4b, 0x94, 0xca, 0x99}}, //DEPT
{15, {0x10, 0x20, 0x5e, 0xfe, 0x10, 0x00, 0x14, 0x53}}, //DEPT
{16, {0x05, 0xc3, 0x22, 0x08, 0x4b, 0x92, 0x51, 0x08}}, //DEPT
{17, {0x10, 0x20, 0x5f, 0x13, 0x10, 0x00, 0x15, 0x81}}, //DEPT
{18, {0x04, 0x32, 0x51, 0x02, 0x41, 0x64, 0x13, 0x89}}, //DEPT
{19, {0x10, 0x20, 0x5f, 0x13, 0x10, 0x00, 0x15, 0x73}}, //DEPT
{20, {0x10, 0x20, 0x5f, 0x13, 0x10, 0x00, 0x18, 0x24}}, //DEPT
{21, {0x10, 0x20, 0x5f, 0x13, 0x10, 0x00, 0x18, 0xf7}}, //DEPT
{22, {0x10, 0x20, 0x5f, 0x8b, 0x10, 0x00, 0x37, 0xcf}}, //DEPT
{23, {0x05, 0xc3, 0x22, 0x08, 0x4b, 0x94, 0xca, 0x2e}}, //DEPT
{24, {0x05, 0xc3, 0x22, 0x08, 0x4b, 0x94, 0x9a, 0x33}}, //DEPT
{25, {0x10, 0x20, 0x5e, 0xe6, 0x10, 0x00, 0x01, 0x6d}}, //DEPT
{26, {0x05, 0xc3, 0x22, 0x08, 0x4b, 0x92, 0x53, 0x2e}}, //DEPT
{27, {0x04, 0x32, 0x51, 0x02, 0x41, 0x64, 0x1b, 0xa5}}, //DEPT
{28, {0x05, 0xc3, 0x22, 0x08, 0x4b, 0x94, 0xc2, 0x03}}, //DEPT
{29, {0x10, 0x20, 0x5f, 0x13, 0x10, 0x00, 0x15, 0x72}}, //DEPT
{30, {0x05, 0xc3, 0x22, 0x08, 0x4b, 0x94, 0x94, 0x19}}, //DEPT
{31, {0x10, 0x20, 0x5f, 0x13, 0x10, 0x00, 0x16, 0x8a}}, //DEPT
{32, {0x05, 0xc3, 0x22, 0x08, 0x4b, 0x92, 0x4e, 0x24}}, //DEPT
{33, {0x05, 0xc3, 0x22, 0x08, 0x4b, 0x94, 0xc2, 0x16}}, //DEPT
{34, {0x04, 0x32, 0x51, 0x02, 0x41, 0x64, 0x19, 0xb0}}, //DEPT
{35, {0x10, 0x20, 0x5f, 0x8b, 0x10, 0x00, 0x37, 0xdd}}, //DEPT
{36, {0x10, 0x20, 0x5f, 0x13, 0x10, 0x00, 0x15, 0x95}}, //DEPT
{100, {0x0d, 0xbb, 0x41, 0x41, 0x50, 0x43, 0x5a, 0x07}}, //DEPT
{101, {0x0d, 0xbb, 0x41, 0x41, 0x10, 0x43, 0x5c, 0xa0}}, //DEPT
{102, {0x0d, 0xbb, 0x41, 0x41, 0x10, 0x43, 0x5d, 0x87}}, //DEPT
{103, {0x0d, 0xbb, 0x41, 0x41, 0x10, 0x43, 0x59, 0x06}}, //DEPT
{104, {0x08, 0x3b, 0x80, 0x46, 0x00, 0x81, 0x89, 0xb8}}, //DEPT
{105, {0x0d, 0xbb, 0x41, 0x41, 0x50, 0x43, 0x5a, 0x27}}, //DEPT
{106, {0x10, 0x20, 0x5f, 0xa7, 0x10, 0x00, 0x46, 0xc6}}, //DEPT
{107, {0x10, 0x20, 0x5f, 0xa7, 0x10, 0x00, 0x41, 0xed}}, //DEPT
{108, {0x0d, 0xbb, 0x41, 0x41, 0x50, 0x43, 0x5a, 0x33}}, //DEPT
{109, {0x10, 0x20, 0x5f, 0xa7, 0x10, 0x00, 0x42, 0xa7}}, //DEPT
{110, {0x10, 0x20, 0x5f, 0xa7, 0x10, 0x00, 0x46, 0xc9}}, //DEPT
{111, {0x0d, 0xbb, 0x41, 0x41, 0x50, 0x43, 0x59, 0xbb}}, //DEPT
{113, {0x0d, 0xbb, 0x41, 0x41, 0x50, 0x43, 0x85, 0x30}}, //DEPT
{114, {0x10, 0x20, 0x5f, 0xa7, 0x10, 0x00, 0x42, 0xb0}}, //DEPT
{115, {0x10, 0x20, 0x5f, 0xa7, 0x10, 0x00, 0x42, 0x9c}}, //DEPT
{116, {0x10, 0x20, 0x5f, 0xa7, 0x10, 0x00, 0x42, 0xd5}}, //DEPT
{117, {0x10, 0x20, 0x5f, 0xa7, 0x10, 0x00, 0x42, 0xb5}}, //DEPT
{118, {0x0d, 0xbb, 0x41, 0x41, 0x10, 0x43, 0x5d, 0x36}}, //DEPT
{119, {0x0d, 0xbb, 0x41, 0x41, 0x10, 0x43, 0x5b, 0xba}}, //DEPT
{121, {0x10, 0x20, 0x5f, 0xa7, 0x10, 0x00, 0x42, 0x3a}}, //DEPT
{122, {0x0d, 0xbb, 0x41, 0x41, 0x50, 0x43, 0x5d, 0x14}}, //DEPT
{123, {0x0d, 0xbb, 0x41, 0x41, 0x10, 0x43, 0x85, 0x23}}, //DEPT
{124, {0x0d, 0xbb, 0x41, 0x41, 0x50, 0x43, 0x84, 0xb6}}, //DEPT
{125, {0x0d, 0xbb, 0x41, 0x41, 0x50, 0x43, 0x5a, 0x1b}}, //DEPT
{126, {0x0d, 0xbb, 0x41, 0x41, 0x50, 0x43, 0x5b, 0x2a}}, //DEPT
{127, {0x0d, 0xbb, 0x41, 0x41, 0x50, 0x43, 0x59, 0x0a}}, //DEPT
{128, {0x10, 0x20, 0x5f, 0xa7, 0x10, 0x00, 0x41, 0xf1}}, //DEPT
{129, {0x10, 0x20, 0x5f, 0x13, 0x10, 0x00, 0x17, 0x0b}}, //DEPT
{130, {0x0d, 0xbb, 0x41, 0x41, 0x50, 0x43, 0x57, 0x25}}, //DEPT
{131, {0x0d, 0xbb, 0x41, 0x41, 0x50, 0x43, 0x5b, 0xae}}, //DEPT
{132, {0x0d, 0xbb, 0x41, 0x41, 0x10, 0x43, 0x58, 0x2e}}, //DEPT
{133, {0x0d, 0xbb, 0x41, 0x41, 0x50, 0x43, 0x58, 0x1a}}, //DEPT
{134, {0x0d, 0xbb, 0x41, 0x41, 0x50, 0x43, 0x5c, 0x98}}, //DEPT
{135, {0x0d, 0xbb, 0x41, 0x41, 0x10, 0x43, 0x58, 0x26}}, //DEPT
{136, {0x0d, 0xbb, 0x41, 0x41, 0x50, 0x43, 0x5c, 0x8f}}, //DEPT
{137, {0x0d, 0xbb, 0x41, 0x41, 0x50, 0x43, 0x5c, 0x93}}, //DEPT
{138, {0x0d, 0xbb, 0x41, 0x41, 0x50, 0x43, 0x85, 0xb5}}, //DEPT
{139, {0x08, 0x3b, 0x80, 0x46, 0x00, 0x81, 0x8e, 0x88}}, //DEPT
{140, {0x0d, 0xbb, 0x41, 0x41, 0x10, 0x43, 0x5a, 0x2f}}, //DEPT
{141, {0x0d, 0xbb, 0x41, 0x41, 0x10, 0x43, 0x5a, 0x23}}, //DEPT
{142, {0x04, 0x32, 0x51, 0x02, 0x01, 0x64, 0x1a, 0x00}}, //DEPT
{143, {0x04, 0x32, 0x51, 0x02, 0x01, 0x64, 0x11, 0x15}}, //DEPT
{144, {0x0d, 0xbb, 0x41, 0x41, 0x50, 0x43, 0x59, 0x8f}}, //DEPT
{145, {0x0d, 0xbb, 0x41, 0x41, 0x10, 0x43, 0x5d, 0x3b}}, //DEPT
{146, {0x0d, 0xbb, 0x41, 0x41, 0x50, 0x43, 0x5b, 0xa6}}, //DEPT
{147, {0x0d, 0xbb, 0x41, 0x41, 0x50, 0x43, 0x85, 0x1b}}, //DEPT
{148, {0x0d, 0xbb, 0x41, 0x41, 0x50, 0x43, 0x5b, 0x3b}}, //DEPT
{149, {0x0d, 0xbb, 0x41, 0x41, 0x50, 0x43, 0x57, 0xba}}, //DEPT
{150, {0x0d, 0xbb, 0x41, 0x41, 0x50, 0x43, 0x5c, 0xa4}}, //DEPT
{151, {0x0d, 0xbb, 0x41, 0x41, 0x10, 0x43, 0x57, 0x9e}}, //DEPT
{152, {0x0d, 0xbb, 0x41, 0x41, 0x50, 0x43, 0x58, 0x1e}}, //DEPT
{153, {0x0d, 0xbb, 0x41, 0x41, 0x10, 0x43, 0x58, 0x9d}}, //DEPT
{154, {0x0d, 0xbb, 0x41, 0x41, 0x50, 0x43, 0x5d, 0x0c}}, //DEPT
{155, {0x10, 0x20, 0x5e, 0x96, 0x10, 0x00, 0x08, 0xc1}}, //LOCAL NODE

{0, {0,0,0,0,0,0,0,0}}
};

const unsigned int deployment_num_nodes = sizeof(deployment_id_addr_list)/sizeof(struct id_addr);
