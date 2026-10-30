/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 func_ov182_021b5a00[];
extern u8 func_ov182_021b5b38[];
extern u8 func_ov182_021b5b80[];
extern u8 func_ov182_021b5bc8[];
extern u8 func_ov182_021b5bec[];

u32 data_ov182_021b7d54[3] = {0x00C900F0, 0x00DD00D3, 0x00F100E7};
u32 data_ov182_021b7d60[4] = {0x00010265, 0x00010265, 0x00010265, 0x00010265};
u32 data_ov182_021b7d70[6] = {0x00020266,
                              (u32) &func_ov182_021b5a00,
                              (u32) &func_ov182_021b5b38,
                              (u32) &func_ov182_021b5b80,
                              (u32) &func_ov182_021b5bc8,
                              (u32) &func_ov182_021b5bec};
