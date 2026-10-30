/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 func_ov073_021b0a60[];
extern u8 func_ov073_021b0e18[];
extern u8 func_ov073_021b0e84[];
extern u8 func_ov073_021b0ef0[];
extern u8 func_ov073_021b0f5c[];

u32 data_ov073_021b2f80[4] = {0x00010274, 0x00010274, 0x00010274, 0x00010274};
u32 data_ov073_021b2f90[6] = {0x00050275,
                              (u32) &func_ov073_021b0a60,
                              (u32) &func_ov073_021b0e18,
                              (u32) &func_ov073_021b0e84,
                              (u32) &func_ov073_021b0ef0,
                              (u32) &func_ov073_021b0f5c};
