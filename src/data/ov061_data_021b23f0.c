/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov061_021b2510[];
extern u8 data_ov061_021b27c0[];
extern u8 data_ov061_021b27cc[];

u32 data_ov061_021b23f0[10] = {0x00000002,
                               0x00000697,
                               0x0000070A,
                               0x0000071B,
                               0x00000697,
                               0x00000708,
                               0x00000039,
                               (u32) &data_ov061_021b2510,
                               (u32) &data_ov061_021b27c0,
                               (u32) &data_ov061_021b27cc};
