/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov069_021b2648[];
extern u8 data_ov069_021b2960[];
extern u8 data_ov069_021b2964[];
extern u8 data_ov069_021b2968[];
extern u8 data_ov069_021b296c[];

u32 data_ov069_021b2534[1]  = {0x001F0020};
u32 data_ov069_021b2538[3]  = {0x0020FFFF, 0xFFFF0021, 0x0000FFFF};
u32 data_ov069_021b2544[12] = {0x00000002,
                               0x00000790,
                               0x000007FC,
                               0x00000802,
                               0x00000790,
                               0x000007FA,
                               0x00000042,
                               (u32) &data_ov069_021b2648,
                               (u32) &data_ov069_021b2964,
                               (u32) &data_ov069_021b2968,
                               (u32) &data_ov069_021b2960,
                               (u32) &data_ov069_021b296c};
