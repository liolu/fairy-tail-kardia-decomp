/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov080_021c18d8[];
extern u8 data_ov080_021c1c60[];
extern u8 data_ov080_021c1c64[];
extern u8 data_ov080_021c1c68[];
extern u8 data_ov080_021c1c6c[];

u32 data_ov080_021c1768[5]  = {0x00000000, 0x00005000, 0x0000A000, 0x00165000, 0x00000000};
u32 data_ov080_021c177c[12] = {0x00000002,
                               0x00000869,
                               0x000008DC,
                               0x000008E7,
                               0x00000869,
                               0x000008DA,
                               0x00000049,
                               (u32) &data_ov080_021c18d8,
                               (u32) &data_ov080_021c1c64,
                               (u32) &data_ov080_021c1c6c,
                               (u32) &data_ov080_021c1c60,
                               (u32) &data_ov080_021c1c68};
