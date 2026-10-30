/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov185_021b01c0[];
extern u8 data_ov185_021b0340[];
extern u8 data_ov185_021b0344[];

u32 data_ov185_021b0200[2]  = {(u32) &data_ov185_021b0344, (u32) &data_ov185_021b0340};
u32 data_ov185_021b0208[3]  = {0x15DB15DA, 0x00000000, (u32) &data_ov185_021b01c0};
u32 data_ov185_021b0214[58] = {
    0x15DB15DA, 0x00000001, (u32) &data_ov185_021b01c0, 0x15DB15DA, 0x00000002, (u32) &data_ov185_021b01c0,
    0x15DB15DA, 0x00000003, (u32) &data_ov185_021b01c0, 0x15DB15DA, 0x00000004, (u32) &data_ov185_021b01c0,
    0x15DB15DA, 0x00000005, (u32) &data_ov185_021b01c0, 0x15DB15DA, 0x00000006, (u32) &data_ov185_021b01c0,
    0x15DB15DA, 0x00000007, (u32) &data_ov185_021b01c0, 0x15DB15DA, 0x00000008, (u32) &data_ov185_021b01c0,
    0x15DB15DA, 0x00000009, (u32) &data_ov185_021b01c0, 0x15DB15DA, 0x0000000A, (u32) &data_ov185_021b01c0,
    0x15DB15DA, 0x0000000B, (u32) &data_ov185_021b01c0, 0x15DB15DA, 0x0000000C, (u32) &data_ov185_021b01c0,
    0x15DB15DA, 0x0000000D, (u32) &data_ov185_021b01c0, 0x15DB15DA, 0x0000000E, (u32) &data_ov185_021b01c0,
    0x15DB15DA, 0x0000000F, (u32) &data_ov185_021b01c0, 0x15DB15DA, 0x00000010, (u32) &data_ov185_021b01c0,
    0x15DB15DA, 0x00000011, (u32) &data_ov185_021b01c0, 0x15DB15DA, 0x00000012, (u32) &data_ov185_021b01c0,
    0x15DB15DA, 0x00000013, (u32) &data_ov185_021b01c0, 0x15DB15DA};
