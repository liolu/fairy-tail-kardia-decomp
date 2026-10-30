/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov107_021bc930[];
extern u8 data_ov107_021bcc20[];
extern u8 data_ov107_021bcc24[];
extern u8 data_ov107_021bcc28[];
extern u8 data_ov107_021bcc2c[];

u32 data_ov107_021bc814[2] = {0x00000BD9, 0x00000C45};
u32 data_ov107_021bc81c[6] = {0x0000003D,
                              (u32) &data_ov107_021bc930,
                              (u32) &data_ov107_021bcc20,
                              (u32) &data_ov107_021bcc2c,
                              (u32) &data_ov107_021bcc28,
                              (u32) &data_ov107_021bcc24};
