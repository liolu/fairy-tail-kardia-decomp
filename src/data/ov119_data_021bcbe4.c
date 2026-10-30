/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov119_021bcd48[];
extern u8 data_ov119_021bd0a0[];
extern u8 data_ov119_021bd0a4[];
extern u8 data_ov119_021bd0a8[];
extern u8 data_ov119_021bd0ac[];

u32 data_ov119_021bcbe4[5]  = {0x001F001E, 0x0020FFFF, 0xFFFF0021, 0x00230022, 0xFFFFFFFF};
u32 data_ov119_021bcbf8[12] = {0x00000002,
                               0x00000D41,
                               0x00000DC1,
                               0x00000DCC,
                               0x00000D41,
                               0x00000DBF,
                               0x00000045,
                               (u32) &data_ov119_021bcd48,
                               (u32) &data_ov119_021bd0a8,
                               (u32) &data_ov119_021bd0a0,
                               (u32) &data_ov119_021bd0a4,
                               (u32) &data_ov119_021bd0ac};
