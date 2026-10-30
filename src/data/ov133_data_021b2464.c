/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov133_021b25c8[];
extern u8 data_ov133_021b2880[];
extern u8 data_ov133_021b2884[];
extern u8 data_ov133_021b2888[];
extern u8 data_ov133_021b288c[];
extern u8 func_ov133_021b09b4[];
extern u8 func_ov133_021b0ab8[];
extern u8 func_ov133_021b0b00[];
extern u8 func_ov133_021b0b48[];
extern u8 func_ov133_021b0b6c[];

u32 data_ov133_021b2464[2]  = {0x02650001, 0x02660001};
u32 data_ov133_021b246c[5]  = {0x00000002, 0x00006800, 0x00007000, 0x00007800, 0x00008000};
u32 data_ov133_021b2480[6]  = {0x00008800,
                               (u32) &func_ov133_021b09b4,
                               (u32) &func_ov133_021b0ab8,
                               (u32) &func_ov133_021b0b00,
                               (u32) &func_ov133_021b0b48,
                               (u32) &func_ov133_021b0b6c};
u32 data_ov133_021b2498[12] = {0x00000002,
                               0x00000F23,
                               0x00000F9B,
                               0x00000FA4,
                               0x00000F23,
                               0x00000F99,
                               0x0000003A,
                               (u32) &data_ov133_021b25c8,
                               (u32) &data_ov133_021b288c,
                               (u32) &data_ov133_021b2888,
                               (u32) &data_ov133_021b2880,
                               (u32) &data_ov133_021b2884};
