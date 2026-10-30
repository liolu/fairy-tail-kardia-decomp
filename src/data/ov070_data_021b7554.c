/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov070_021b7668[];
extern u8 data_ov070_021b7980[];
extern u8 data_ov070_021b7984[];
extern u8 data_ov070_021b7988[];
extern u8 data_ov070_021b798c[];

u32 data_ov070_021b7554[1]  = {0x001F0020};
u32 data_ov070_021b7558[3]  = {0x0020FFFF, 0xFFFF0021, 0x0000FFFF};
u32 data_ov070_021b7564[12] = {0x00000002,
                               0x00000790,
                               0x000007FC,
                               0x00000802,
                               0x00000790,
                               0x000007FA,
                               0x00000042,
                               (u32) &data_ov070_021b7668,
                               (u32) &data_ov070_021b7984,
                               (u32) &data_ov070_021b7988,
                               (u32) &data_ov070_021b7980,
                               (u32) &data_ov070_021b798c};
