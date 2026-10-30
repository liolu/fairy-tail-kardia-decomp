/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov065_021b238c[];
extern u8 data_ov065_021b2660[];
extern u8 data_ov065_021b2664[];
extern u8 data_ov065_021b2668[];
extern u8 data_ov065_021b266c[];

u32 data_ov065_021b2260[7]  = {0x001CFFFF, 0xFFFFFFFF, 0xFFFF001C, 0x001CFFFF, 0xFFFFFFFF, 0xFFFF001D, 0x0000001E};
u32 data_ov065_021b227c[12] = {0x00000002,
                               0x0000071C,
                               0x00000788,
                               0x0000078F,
                               0x0000071C,
                               0x00000786,
                               0x0000003C,
                               (u32) &data_ov065_021b238c,
                               (u32) &data_ov065_021b2664,
                               (u32) &data_ov065_021b266c,
                               (u32) &data_ov065_021b2660,
                               (u32) &data_ov065_021b2668};
