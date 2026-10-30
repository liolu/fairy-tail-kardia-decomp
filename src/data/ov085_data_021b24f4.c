/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 func_ov085_021b0a10[];
extern u8 func_ov085_021b0c24[];
extern u8 func_ov085_021b0c6c[];
extern u8 func_ov085_021b0cb4[];
extern u8 func_ov085_021b0cfc[];

u32 data_ov085_021b24f4[1] = {0x0020001A};
u32 data_ov085_021b24f8[3] = {0x00010274, 0x00010274, 0x00020274};
u32 data_ov085_021b2504[6] = {0x00010275,
                              (u32) &func_ov085_021b0a10,
                              (u32) &func_ov085_021b0c24,
                              (u32) &func_ov085_021b0c6c,
                              (u32) &func_ov085_021b0cb4,
                              (u32) &func_ov085_021b0cfc};
