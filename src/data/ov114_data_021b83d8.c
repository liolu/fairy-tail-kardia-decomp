/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov114_021b85c0[];
extern u8 data_ov114_021b89c0[];
extern u8 data_ov114_021b89c4[];
extern u8 data_ov114_021b89c8[];
extern u8 data_ov114_021b89cc[];

u32 data_ov114_021b83d8[1]  = {0x00024000};
u32 data_ov114_021b83dc[11] = {0x00028000, 0x00024000, 0x00028000, 0x00024000, 0x00018000, 0x00018000,
                               0x00020000, 0x00024000, 0x00024000, 0x00024000, 0x0001C000};
u32 data_ov114_021b8408[12] = {0x00000002,
                               0x00000CCF,
                               0x00000D39,
                               0x00000D40,
                               0x00000CCF,
                               0x00000D37,
                               0x00000054,
                               (u32) &data_ov114_021b85c0,
                               (u32) &data_ov114_021b89c4,
                               (u32) &data_ov114_021b89c8,
                               (u32) &data_ov114_021b89cc,
                               (u32) &data_ov114_021b89c0};
