/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov153_021b28d8[];
extern u8 data_ov153_021b2c20[];
extern u8 data_ov153_021b2c24[];
extern u8 data_ov153_021b2c28[];
extern u8 data_ov153_021b2c2c[];
extern u8 func_ov153_021b079c[];
extern u8 func_ov153_021b08e8[];
extern u8 func_ov153_021b0930[];
extern u8 func_ov153_021b0978[];
extern u8 func_ov153_021b09c0[];

u32 data_ov153_021b2748[3]  = {0x02650001, 0x02650001, 0x02660002};
u32 data_ov153_021b2754[6]  = {0x00000001,
                               (u32) &func_ov153_021b079c,
                               (u32) &func_ov153_021b08e8,
                               (u32) &func_ov153_021b0930,
                               (u32) &func_ov153_021b0978,
                               (u32) &func_ov153_021b09c0};
u32 data_ov153_021b276c[12] = {0x00000002,
                               0x00001185,
                               0x00001214,
                               0x00001224,
                               0x00001185,
                               0x00001212,
                               0x00000044,
                               (u32) &data_ov153_021b28d8,
                               (u32) &data_ov153_021b2c20,
                               (u32) &data_ov153_021b2c24,
                               (u32) &data_ov153_021b2c2c,
                               (u32) &data_ov153_021b2c28};
