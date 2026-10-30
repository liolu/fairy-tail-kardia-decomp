/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov083_021bcaec[];
extern u8 data_ov083_021bcea0[];
extern u8 data_ov083_021bcea4[];
extern u8 data_ov083_021bcea8[];
extern u8 data_ov083_021bceac[];

u32 data_ov083_021bc9a4[5]  = {0x00210020, 0x0022FFFF, 0xFFFF0023, 0x00250024, 0xFFFFFFFF};
u32 data_ov083_021bc9b8[12] = {0x00000002,
                               0x000008E8,
                               0x00000962,
                               0x0000096C,
                               0x000008E8,
                               0x00000960,
                               0x0000004E,
                               (u32) &data_ov083_021bcaec,
                               (u32) &data_ov083_021bcea8,
                               (u32) &data_ov083_021bceac,
                               (u32) &data_ov083_021bcea4,
                               (u32) &data_ov083_021bcea0};
