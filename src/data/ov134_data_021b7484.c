/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov134_021b75e8[];
extern u8 data_ov134_021b78a0[];
extern u8 data_ov134_021b78a4[];
extern u8 data_ov134_021b78a8[];
extern u8 data_ov134_021b78ac[];
extern u8 func_ov134_021b59d4[];
extern u8 func_ov134_021b5ad8[];
extern u8 func_ov134_021b5b20[];
extern u8 func_ov134_021b5b68[];
extern u8 func_ov134_021b5b8c[];

u32 data_ov134_021b7484[2]  = {0x02650001, 0x02660001};
u32 data_ov134_021b748c[5]  = {0x00000002, 0x00006800, 0x00007000, 0x00007800, 0x00008000};
u32 data_ov134_021b74a0[6]  = {0x00008800,
                               (u32) &func_ov134_021b59d4,
                               (u32) &func_ov134_021b5ad8,
                               (u32) &func_ov134_021b5b20,
                               (u32) &func_ov134_021b5b68,
                               (u32) &func_ov134_021b5b8c};
u32 data_ov134_021b74b8[12] = {0x00000002,
                               0x00000F23,
                               0x00000F9B,
                               0x00000FA4,
                               0x00000F23,
                               0x00000F99,
                               0x0000003A,
                               (u32) &data_ov134_021b75e8,
                               (u32) &data_ov134_021b78ac,
                               (u32) &data_ov134_021b78a8,
                               (u32) &data_ov134_021b78a0,
                               (u32) &data_ov134_021b78a4};
