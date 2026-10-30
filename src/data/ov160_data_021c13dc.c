/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov160_021c1558[];
extern u8 data_ov160_021c1900[];
extern u8 data_ov160_021c1904[];
extern u8 data_ov160_021c1908[];
extern u8 data_ov160_021c190c[];

u32 data_ov160_021c13dc[2]  = {0x00000002, 0x00001225};
u32 data_ov160_021c13e4[10] = {0x000012AD,
                               0x000012BB,
                               0x00001225,
                               0x000012AB,
                               0x0000004D,
                               (u32) &data_ov160_021c1558,
                               (u32) &data_ov160_021c1900,
                               (u32) &data_ov160_021c190c,
                               (u32) &data_ov160_021c1908,
                               (u32) &data_ov160_021c1904};
u32 data_ov160_021c140c[17] = {0x12321231, 0x12341233, 0x12361235, 0x12381237, 0x123A1239, 0x124F123B,
                               0x124A1249, 0x124C124B, 0x124E124D, 0x12561250, 0x12581257, 0x12511259,
                               0x123E1252, 0x1240123F, 0x12421241, 0x123C1243, 0x12451244};
