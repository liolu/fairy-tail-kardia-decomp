/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov105_021b28f0[];
extern u8 data_ov105_021b2be0[];
extern u8 data_ov105_021b2be4[];
extern u8 data_ov105_021b2be8[];
extern u8 data_ov105_021b2bec[];

u32 data_ov105_021b27d4[2] = {0x00000BD9, 0x00000C45};
u32 data_ov105_021b27dc[6] = {0x0000003D,
                              (u32) &data_ov105_021b28f0,
                              (u32) &data_ov105_021b2be0,
                              (u32) &data_ov105_021b2bec,
                              (u32) &data_ov105_021b2be8,
                              (u32) &data_ov105_021b2be4};
