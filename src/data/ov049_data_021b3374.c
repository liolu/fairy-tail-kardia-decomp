/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov049_021b34d0[];
extern u8 data_ov049_021b3860[];
extern u8 data_ov049_021b3864[];
extern u8 data_ov049_021b3868[];
extern u8 data_ov049_021b386c[];

u32 data_ov049_021b3374[6]  = {0x00020274, 0x00020274, 0x00020274, 0x00020274, 0x00020274, 0x00020275};
u32 data_ov049_021b338c[12] = {0x00000002,
                               0x00000538,
                               0x000005A9,
                               0x000005B2,
                               0x00000538,
                               0x000005A7,
                               0x0000004B,
                               (u32) &data_ov049_021b34d0,
                               (u32) &data_ov049_021b3864,
                               (u32) &data_ov049_021b386c,
                               (u32) &data_ov049_021b3868,
                               (u32) &data_ov049_021b3860};
