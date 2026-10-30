/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov150_021b7638[];
extern u8 data_ov150_021b78c0[];
extern u8 data_ov150_021b78c4[];
extern u8 data_ov150_021b78c8[];
extern u8 data_ov150_021b78cc[];

u32 data_ov150_021b7504[4] = {0x00000002, 0x0000111A, 0x00001179, 0x00001184};
u32 data_ov150_021b7514[8] = {0x0000111A,
                              0x00001177,
                              0x00000035,
                              (u32) &data_ov150_021b7638,
                              (u32) &data_ov150_021b78c4,
                              (u32) &data_ov150_021b78c0,
                              (u32) &data_ov150_021b78cc,
                              (u32) &data_ov150_021b78c8};
