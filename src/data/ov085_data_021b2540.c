/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov085_021b2744[];
extern u8 data_ov085_021b2a20[];
extern u8 data_ov085_021b2a24[];
extern u8 data_ov085_021b2a28[];
extern u8 data_ov085_021b2a2c[];

u32 data_ov085_021b2540[1]  = {0x000009F9};
u32 data_ov085_021b2544[18] = {0x0000096D,
                               0x000009ED,
                               0x0000003C,
                               (u32) &data_ov085_021b2744,
                               (u32) &data_ov085_021b2a24,
                               (u32) &data_ov085_021b2a2c,
                               (u32) &data_ov085_021b2a28,
                               (u32) &data_ov085_021b2a20,
                               0x00010000,
                               0x00020000,
                               0xFFFFFFFF,
                               0xFFFFFFFF,
                               0xFFFFFFFF,
                               0xFFFFFFFF,
                               0xFFFFFFFF,
                               0xFFFFFFFF,
                               0xFFFFFFFF,
                               0xFFFFFFFF};
