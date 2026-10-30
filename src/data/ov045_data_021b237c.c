/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov045_021b24cc[];
extern u8 data_ov045_021b27c0[];
extern u8 data_ov045_021b27c4[];
extern u8 data_ov045_021b27c8[];
extern u8 data_ov045_021b27cc[];

u32 data_ov045_021b237c[2]  = {0x00010265, 0x00020266};
u32 data_ov045_021b2384[12] = {0x00000002,
                               0x000004B0,
                               0x0000052D,
                               0x00000537,
                               0x000004B0,
                               0x0000052B,
                               0x0000003E,
                               (u32) &data_ov045_021b24cc,
                               (u32) &data_ov045_021b27c0,
                               (u32) &data_ov045_021b27c4,
                               (u32) &data_ov045_021b27cc,
                               (u32) &data_ov045_021b27c8};
u32 data_ov045_021b23b4[15] = {0x04BD04BC, 0x04BF04BE, 0x04C104C0, 0x04C304C2, 0x04C504C4, 0x04D604C6, 0x04D304D2, 0x04D504D4,
                               0x04DE04D7, 0x04E004DF, 0x04E204E1, 0x04D804E3, 0x04C704D9, 0x04C904C8, 0x04CB04CA};
