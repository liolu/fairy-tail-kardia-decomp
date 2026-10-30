/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov156_021c1938[];
extern u8 data_ov156_021c1c80[];
extern u8 data_ov156_021c1c84[];
extern u8 data_ov156_021c1c88[];
extern u8 data_ov156_021c1c8c[];
extern u8 func_ov156_021bf7fc[];
extern u8 func_ov156_021bf948[];
extern u8 func_ov156_021bf990[];
extern u8 func_ov156_021bf9d8[];
extern u8 func_ov156_021bfa20[];

u32 data_ov156_021c17a8[3]  = {0x02650001, 0x02650001, 0x02660002};
u32 data_ov156_021c17b4[6]  = {0x00000001,
                               (u32) &func_ov156_021bf7fc,
                               (u32) &func_ov156_021bf948,
                               (u32) &func_ov156_021bf990,
                               (u32) &func_ov156_021bf9d8,
                               (u32) &func_ov156_021bfa20};
u32 data_ov156_021c17cc[12] = {0x00000002,
                               0x00001185,
                               0x00001214,
                               0x00001224,
                               0x00001185,
                               0x00001212,
                               0x00000044,
                               (u32) &data_ov156_021c1938,
                               (u32) &data_ov156_021c1c80,
                               (u32) &data_ov156_021c1c84,
                               (u32) &data_ov156_021c1c8c,
                               (u32) &data_ov156_021c1c88};
