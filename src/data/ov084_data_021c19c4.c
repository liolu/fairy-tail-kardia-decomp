/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov084_021c1b0c[];
extern u8 data_ov084_021c1ec0[];
extern u8 data_ov084_021c1ec4[];
extern u8 data_ov084_021c1ec8[];
extern u8 data_ov084_021c1ecc[];

u32 data_ov084_021c19c4[5]  = {0x00210020, 0x0022FFFF, 0xFFFF0023, 0x00250024, 0xFFFFFFFF};
u32 data_ov084_021c19d8[12] = {0x00000002,
                               0x000008E8,
                               0x00000962,
                               0x0000096C,
                               0x000008E8,
                               0x00000960,
                               0x0000004E,
                               (u32) &data_ov084_021c1b0c,
                               (u32) &data_ov084_021c1ec8,
                               (u32) &data_ov084_021c1ecc,
                               (u32) &data_ov084_021c1ec4,
                               (u32) &data_ov084_021c1ec0};
