/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov136_021c1628[];
extern u8 data_ov136_021c18e0[];
extern u8 data_ov136_021c18e4[];
extern u8 data_ov136_021c18e8[];
extern u8 data_ov136_021c18ec[];
extern u8 func_ov136_021bfa14[];
extern u8 func_ov136_021bfb18[];
extern u8 func_ov136_021bfb60[];
extern u8 func_ov136_021bfba8[];
extern u8 func_ov136_021bfbcc[];

u32 data_ov136_021c14c4[2]  = {0x02650001, 0x02660001};
u32 data_ov136_021c14cc[5]  = {0x00000002, 0x00006800, 0x00007000, 0x00007800, 0x00008000};
u32 data_ov136_021c14e0[6]  = {0x00008800,
                               (u32) &func_ov136_021bfa14,
                               (u32) &func_ov136_021bfb18,
                               (u32) &func_ov136_021bfb60,
                               (u32) &func_ov136_021bfba8,
                               (u32) &func_ov136_021bfbcc};
u32 data_ov136_021c14f8[12] = {0x00000002,
                               0x00000F23,
                               0x00000F9B,
                               0x00000FA4,
                               0x00000F23,
                               0x00000F99,
                               0x0000003A,
                               (u32) &data_ov136_021c1628,
                               (u32) &data_ov136_021c18ec,
                               (u32) &data_ov136_021c18e8,
                               (u32) &data_ov136_021c18e0,
                               (u32) &data_ov136_021c18e4};
