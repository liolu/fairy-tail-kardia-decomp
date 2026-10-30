/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov062_021b7530[];
extern u8 data_ov062_021b77e0[];
extern u8 data_ov062_021b77ec[];

u32 data_ov062_021b7410[10] = {0x00000002,
                               0x00000697,
                               0x0000070A,
                               0x0000071B,
                               0x00000697,
                               0x00000708,
                               0x00000039,
                               (u32) &data_ov062_021b7530,
                               (u32) &data_ov062_021b77e0,
                               (u32) &data_ov062_021b77ec};
