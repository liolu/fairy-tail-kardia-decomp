/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 func_ov162_021b5bec[];
extern u8 func_ov162_021b5e30[];
extern u8 func_ov162_021b5e78[];
extern u8 func_ov162_021b5ec0[];
extern u8 func_ov162_021b5f08[];

u32 data_ov162_021b7e30[3] = {0x001F001E, 0xFFFFFFFF, 0xFFFF0020};
u32 data_ov162_021b7e3c[6] = {0x0000FFFF,
                              (u32) &func_ov162_021b5bec,
                              (u32) &func_ov162_021b5e30,
                              (u32) &func_ov162_021b5e78,
                              (u32) &func_ov162_021b5ec0,
                              (u32) &func_ov162_021b5f08};
