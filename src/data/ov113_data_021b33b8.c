/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov113_021b35a0[];
extern u8 data_ov113_021b39a0[];
extern u8 data_ov113_021b39a4[];
extern u8 data_ov113_021b39a8[];
extern u8 data_ov113_021b39ac[];

u32 data_ov113_021b33b8[1]  = {0x00024000};
u32 data_ov113_021b33bc[11] = {0x00028000, 0x00024000, 0x00028000, 0x00024000, 0x00018000, 0x00018000,
                               0x00020000, 0x00024000, 0x00024000, 0x00024000, 0x0001C000};
u32 data_ov113_021b33e8[12] = {0x00000002,
                               0x00000CCF,
                               0x00000D39,
                               0x00000D40,
                               0x00000CCF,
                               0x00000D37,
                               0x00000054,
                               (u32) &data_ov113_021b35a0,
                               (u32) &data_ov113_021b39a4,
                               (u32) &data_ov113_021b39a8,
                               (u32) &data_ov113_021b39ac,
                               (u32) &data_ov113_021b39a0};
