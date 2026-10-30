/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov067_021bc3cc[];
extern u8 data_ov067_021bc6a0[];
extern u8 data_ov067_021bc6a4[];
extern u8 data_ov067_021bc6a8[];
extern u8 data_ov067_021bc6ac[];

u32 data_ov067_021bc2a0[7]  = {0x001CFFFF, 0xFFFFFFFF, 0xFFFF001C, 0x001CFFFF, 0xFFFFFFFF, 0xFFFF001D, 0x0000001E};
u32 data_ov067_021bc2bc[12] = {0x00000002,
                               0x0000071C,
                               0x00000788,
                               0x0000078F,
                               0x0000071C,
                               0x00000786,
                               0x0000003C,
                               (u32) &data_ov067_021bc3cc,
                               (u32) &data_ov067_021bc6a4,
                               (u32) &data_ov067_021bc6ac,
                               (u32) &data_ov067_021bc6a0,
                               (u32) &data_ov067_021bc6a8};
