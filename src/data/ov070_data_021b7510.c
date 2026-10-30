/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 func_ov070_021b5a10[];
extern u8 func_ov070_021b5bbc[];
extern u8 func_ov070_021b5c04[];
extern u8 func_ov070_021b5c4c[];
extern u8 func_ov070_021b5c94[];

u32 data_ov070_021b7510[1] = {0x000700F0};
u32 data_ov070_021b7514[2] = {0x0013000D, 0x001F0019};
u32 data_ov070_021b751c[4] = {0x00010265, 0x00010297, 0x00010297, 0x00010297};
u32 data_ov070_021b752c[6] = {0x00010266,
                              (u32) &func_ov070_021b5a10,
                              (u32) &func_ov070_021b5bbc,
                              (u32) &func_ov070_021b5c04,
                              (u32) &func_ov070_021b5c4c,
                              (u32) &func_ov070_021b5c94};
