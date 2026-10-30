/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 func_ov110_021b59c8[];
extern u8 func_ov110_021b5ee8[];
extern u8 func_ov110_021b5f54[];
extern u8 func_ov110_021b5fc0[];
extern u8 func_ov110_021b602c[];

u32 data_ov110_021b7c30[4] = {0x00010265, 0x00020265, 0x00010265, 0x00020265};
u32 data_ov110_021b7c40[6] = {0x00020266,
                              (u32) &func_ov110_021b59c8,
                              (u32) &func_ov110_021b5ee8,
                              (u32) &func_ov110_021b5f54,
                              (u32) &func_ov110_021b5fc0,
                              (u32) &func_ov110_021b602c};
