/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov072_021c16a8[];
extern u8 data_ov072_021c19c0[];
extern u8 data_ov072_021c19c4[];
extern u8 data_ov072_021c19c8[];
extern u8 data_ov072_021c19cc[];

u32 data_ov072_021c1594[1]  = {0x001F0020};
u32 data_ov072_021c1598[3]  = {0x0020FFFF, 0xFFFF0021, 0x0000FFFF};
u32 data_ov072_021c15a4[12] = {0x00000002,
                               0x00000790,
                               0x000007FC,
                               0x00000802,
                               0x00000790,
                               0x000007FA,
                               0x00000042,
                               (u32) &data_ov072_021c16a8,
                               (u32) &data_ov072_021c19c4,
                               (u32) &data_ov072_021c19c8,
                               (u32) &data_ov072_021c19c0,
                               (u32) &data_ov072_021c19cc};
