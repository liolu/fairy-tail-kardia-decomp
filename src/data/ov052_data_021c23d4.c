/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov052_021c2530[];
extern u8 data_ov052_021c28c0[];
extern u8 data_ov052_021c28c4[];
extern u8 data_ov052_021c28c8[];
extern u8 data_ov052_021c28cc[];

u32 data_ov052_021c23d4[6]  = {0x00020274, 0x00020274, 0x00020274, 0x00020274, 0x00020274, 0x00020275};
u32 data_ov052_021c23ec[12] = {0x00000002,
                               0x00000538,
                               0x000005A9,
                               0x000005B2,
                               0x00000538,
                               0x000005A7,
                               0x0000004B,
                               (u32) &data_ov052_021c2530,
                               (u32) &data_ov052_021c28c4,
                               (u32) &data_ov052_021c28cc,
                               (u32) &data_ov052_021c28c8,
                               (u32) &data_ov052_021c28c0};
