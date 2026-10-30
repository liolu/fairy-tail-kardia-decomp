/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov108_021c1950[];
extern u8 data_ov108_021c1c40[];
extern u8 data_ov108_021c1c44[];
extern u8 data_ov108_021c1c48[];
extern u8 data_ov108_021c1c4c[];

u32 data_ov108_021c1834[2] = {0x00000BD9, 0x00000C45};
u32 data_ov108_021c183c[6] = {0x0000003D,
                              (u32) &data_ov108_021c1950,
                              (u32) &data_ov108_021c1c40,
                              (u32) &data_ov108_021c1c4c,
                              (u32) &data_ov108_021c1c48,
                              (u32) &data_ov108_021c1c44};
