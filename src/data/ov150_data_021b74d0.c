/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 func_ov150_021b5838[];
extern u8 func_ov150_021b598c[];
extern u8 func_ov150_021b59d4[];
extern u8 func_ov150_021b5a1c[];
extern u8 func_ov150_021b5a40[];

u32 data_ov150_021b74d0[2] = {0x00C800F0, 0x00DC00D2};
u32 data_ov150_021b74d8[6] = {0x00F000E6,
                              (u32) &func_ov150_021b5838,
                              (u32) &func_ov150_021b598c,
                              (u32) &func_ov150_021b59d4,
                              (u32) &func_ov150_021b5a1c,
                              (u32) &func_ov150_021b5a40};
