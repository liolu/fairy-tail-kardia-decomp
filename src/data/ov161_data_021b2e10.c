/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 func_ov161_021b0bcc[];
extern u8 func_ov161_021b0e10[];
extern u8 func_ov161_021b0e58[];
extern u8 func_ov161_021b0ea0[];
extern u8 func_ov161_021b0ee8[];

u32 data_ov161_021b2e10[3] = {0x001F001E, 0xFFFFFFFF, 0xFFFF0020};
u32 data_ov161_021b2e1c[6] = {0x0000FFFF,
                              (u32) &func_ov161_021b0bcc,
                              (u32) &func_ov161_021b0e10,
                              (u32) &func_ov161_021b0e58,
                              (u32) &func_ov161_021b0ea0,
                              (u32) &func_ov161_021b0ee8};
