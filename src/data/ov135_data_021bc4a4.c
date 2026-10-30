/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov135_021bc608[];
extern u8 data_ov135_021bc8c0[];
extern u8 data_ov135_021bc8c4[];
extern u8 data_ov135_021bc8c8[];
extern u8 data_ov135_021bc8cc[];
extern u8 func_ov135_021ba9f4[];
extern u8 func_ov135_021baaf8[];
extern u8 func_ov135_021bab40[];
extern u8 func_ov135_021bab88[];
extern u8 func_ov135_021babac[];

u32 data_ov135_021bc4a4[2]  = {0x02650001, 0x02660001};
u32 data_ov135_021bc4ac[5]  = {0x00000002, 0x00006800, 0x00007000, 0x00007800, 0x00008000};
u32 data_ov135_021bc4c0[6]  = {0x00008800,
                               (u32) &func_ov135_021ba9f4,
                               (u32) &func_ov135_021baaf8,
                               (u32) &func_ov135_021bab40,
                               (u32) &func_ov135_021bab88,
                               (u32) &func_ov135_021babac};
u32 data_ov135_021bc4d8[12] = {0x00000002,
                               0x00000F23,
                               0x00000F9B,
                               0x00000FA4,
                               0x00000F23,
                               0x00000F99,
                               0x0000003A,
                               (u32) &data_ov135_021bc608,
                               (u32) &data_ov135_021bc8cc,
                               (u32) &data_ov135_021bc8c8,
                               (u32) &data_ov135_021bc8c0,
                               (u32) &data_ov135_021bc8c4};
