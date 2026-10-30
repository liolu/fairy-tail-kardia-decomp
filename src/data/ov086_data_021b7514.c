/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 func_ov086_021b5a30[];
extern u8 func_ov086_021b5c44[];
extern u8 func_ov086_021b5c8c[];
extern u8 func_ov086_021b5cd4[];
extern u8 func_ov086_021b5d1c[];

u32 data_ov086_021b7514[1] = {0x0020001A};
u32 data_ov086_021b7518[3] = {0x00010274, 0x00010274, 0x00020274};
u32 data_ov086_021b7524[6] = {0x00010275,
                              (u32) &func_ov086_021b5a30,
                              (u32) &func_ov086_021b5c44,
                              (u32) &func_ov086_021b5c8c,
                              (u32) &func_ov086_021b5cd4,
                              (u32) &func_ov086_021b5d1c};
