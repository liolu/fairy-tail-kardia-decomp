/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov179_021bca90[];
extern u8 data_ov179_021bcde0[];
extern u8 data_ov179_021bcde4[];
extern u8 data_ov179_021bcde8[];
extern u8 data_ov179_021bcdec[];

u32 data_ov179_021bc948[1]  = {0x00030000};
u32 data_ov179_021bc94c[11] = {0x00000000, 0x00048000, 0x00000000, 0x00060000, 0x00000000, 0x00078000,
                               0x00000000, 0x00090000, 0x00000000, 0x000A8000, 0x00000000};
u32 data_ov179_021bc978[12] = {0x00000002,
                               0x000014C7,
                               0x0000152D,
                               0x00001539,
                               0x000014C7,
                               0x0000152B,
                               0x00000046,
                               (u32) &data_ov179_021bca90,
                               (u32) &data_ov179_021bcde4,
                               (u32) &data_ov179_021bcdec,
                               (u32) &data_ov179_021bcde0,
                               (u32) &data_ov179_021bcde8};
