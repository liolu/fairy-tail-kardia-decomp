/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov071_021bc688[];
extern u8 data_ov071_021bc9a0[];
extern u8 data_ov071_021bc9a4[];
extern u8 data_ov071_021bc9a8[];
extern u8 data_ov071_021bc9ac[];

u32 data_ov071_021bc574[1]  = {0x001F0020};
u32 data_ov071_021bc578[3]  = {0x0020FFFF, 0xFFFF0021, 0x0000FFFF};
u32 data_ov071_021bc584[12] = {0x00000002,
                               0x00000790,
                               0x000007FC,
                               0x00000802,
                               0x00000790,
                               0x000007FA,
                               0x00000042,
                               (u32) &data_ov071_021bc688,
                               (u32) &data_ov071_021bc9a4,
                               (u32) &data_ov071_021bc9a8,
                               (u32) &data_ov071_021bc9a0,
                               (u32) &data_ov071_021bc9ac};
