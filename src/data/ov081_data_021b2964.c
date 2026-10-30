/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov081_021b2aac[];
extern u8 data_ov081_021b2e60[];
extern u8 data_ov081_021b2e64[];
extern u8 data_ov081_021b2e68[];
extern u8 data_ov081_021b2e6c[];

u32 data_ov081_021b2964[5]  = {0x00210020, 0x0022FFFF, 0xFFFF0023, 0x00250024, 0xFFFFFFFF};
u32 data_ov081_021b2978[12] = {0x00000002,
                               0x000008E8,
                               0x00000962,
                               0x0000096C,
                               0x000008E8,
                               0x00000960,
                               0x0000004E,
                               (u32) &data_ov081_021b2aac,
                               (u32) &data_ov081_021b2e68,
                               (u32) &data_ov081_021b2e6c,
                               (u32) &data_ov081_021b2e64,
                               (u32) &data_ov081_021b2e60};
