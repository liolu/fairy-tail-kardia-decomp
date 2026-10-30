/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov152_021c1678[];
extern u8 data_ov152_021c1900[];
extern u8 data_ov152_021c1904[];
extern u8 data_ov152_021c1908[];
extern u8 data_ov152_021c190c[];

u32 data_ov152_021c1544[4] = {0x00000002, 0x0000111A, 0x00001179, 0x00001184};
u32 data_ov152_021c1554[8] = {0x0000111A,
                              0x00001177,
                              0x00000035,
                              (u32) &data_ov152_021c1678,
                              (u32) &data_ov152_021c1904,
                              (u32) &data_ov152_021c1900,
                              (u32) &data_ov152_021c190c,
                              (u32) &data_ov152_021c1908};
