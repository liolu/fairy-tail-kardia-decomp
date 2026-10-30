/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov145_021b35a4[];
extern u8 data_ov145_021b3960[];
extern u8 data_ov145_021b3964[];
extern u8 data_ov145_021b3968[];
extern u8 data_ov145_021b396c[];

u32 data_ov145_021b32dc[7]  = {0x001F001E, 0x0020FFFF, 0xFFFF0021, 0x00230022, 0x0024FFFF, 0xFFFF0025, 0x0000FFFF};
u32 data_ov145_021b32f8[12] = {0x00000002,
                               0x000010AC,
                               0x00001110,
                               0x00001119,
                               0x000010AC,
                               0x0000110E,
                               0x0000004E,
                               (u32) &data_ov145_021b35a4,
                               (u32) &data_ov145_021b396c,
                               (u32) &data_ov145_021b3964,
                               (u32) &data_ov145_021b3968,
                               (u32) &data_ov145_021b3960};
u32 data_ov145_021b3328[13] = {0x10B910B8, 0x10BB10BA, 0x10BD10BC, 0x10BF10BE, 0x10C110C0, 0x10D210C2, 0x10CF10CE,
                               0x10D110D0, 0x10DB10D3, 0x10DD10DC, 0x10D510D4, 0x10C410C3, 0x10C610C5};
