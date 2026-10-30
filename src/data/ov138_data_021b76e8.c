/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov138_021b797c[];
extern u8 data_ov138_021b7c80[];
extern u8 data_ov138_021b7c84[];
extern u8 data_ov138_021b7c88[];
extern u8 data_ov138_021b7c8c[];

u32 data_ov138_021b76e8[5]  = {0x00010265, 0x00020265, 0x00010265, 0x00020265, 0x00030266};
u32 data_ov138_021b76fc[12] = {0x00000002,
                               0x00000FA5,
                               0x00001025,
                               0x00001034,
                               0x00000FA5,
                               0x00001023,
                               0x0000003E,
                               (u32) &data_ov138_021b797c,
                               (u32) &data_ov138_021b7c84,
                               (u32) &data_ov138_021b7c8c,
                               (u32) &data_ov138_021b7c80,
                               (u32) &data_ov138_021b7c88};
