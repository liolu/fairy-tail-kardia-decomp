/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov054_021b7e58[];
extern u8 data_ov054_021b8140[];
extern u8 data_ov054_021b8144[];
extern u8 data_ov054_021b8148[];
extern u8 data_ov054_021b814c[];
extern u8 func_ov054_021b5a6c[];
extern u8 func_ov054_021b5ca0[];
extern u8 func_ov054_021b5ce8[];
extern u8 func_ov054_021b5d30[];
extern u8 func_ov054_021b5d78[];

u32 data_ov054_021b7bfc[3]  = {0x00010265, 0x00010265, 0x00010266};
u32 data_ov054_021b7c08[5]  = {(u32) &func_ov054_021b5a6c, (u32) &func_ov054_021b5ca0, (u32) &func_ov054_021b5ce8,
                               (u32) &func_ov054_021b5d30, (u32) &func_ov054_021b5d78};
u32 data_ov054_021b7c1c[12] = {0x00000002,
                               0x000005B3,
                               0x00000613,
                               0x00000619,
                               0x000005B3,
                               0x00000611,
                               0x0000003E,
                               (u32) &data_ov054_021b7e58,
                               (u32) &data_ov054_021b8148,
                               (u32) &data_ov054_021b814c,
                               (u32) &data_ov054_021b8144,
                               (u32) &data_ov054_021b8140};
