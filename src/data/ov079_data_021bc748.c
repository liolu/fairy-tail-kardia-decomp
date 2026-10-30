/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov079_021bc8b8[];
extern u8 data_ov079_021bcc40[];
extern u8 data_ov079_021bcc44[];
extern u8 data_ov079_021bcc48[];
extern u8 data_ov079_021bcc4c[];

u32 data_ov079_021bc748[5]  = {0x00000000, 0x00005000, 0x0000A000, 0x00165000, 0x00000000};
u32 data_ov079_021bc75c[12] = {0x00000002,
                               0x00000869,
                               0x000008DC,
                               0x000008E7,
                               0x00000869,
                               0x000008DA,
                               0x00000049,
                               (u32) &data_ov079_021bc8b8,
                               (u32) &data_ov079_021bcc44,
                               (u32) &data_ov079_021bcc4c,
                               (u32) &data_ov079_021bcc40,
                               (u32) &data_ov079_021bcc48};
