/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov077_021b2878[];
extern u8 data_ov077_021b2c00[];
extern u8 data_ov077_021b2c04[];
extern u8 data_ov077_021b2c08[];
extern u8 data_ov077_021b2c0c[];

u32 data_ov077_021b2708[5]  = {0x00000000, 0x00005000, 0x0000A000, 0x00165000, 0x00000000};
u32 data_ov077_021b271c[12] = {0x00000002,
                               0x00000869,
                               0x000008DC,
                               0x000008E7,
                               0x00000869,
                               0x000008DA,
                               0x00000049,
                               (u32) &data_ov077_021b2878,
                               (u32) &data_ov077_021b2c04,
                               (u32) &data_ov077_021b2c0c,
                               (u32) &data_ov077_021b2c00,
                               (u32) &data_ov077_021b2c08};
