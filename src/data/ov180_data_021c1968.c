/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov180_021c1ab0[];
extern u8 data_ov180_021c1e00[];
extern u8 data_ov180_021c1e04[];
extern u8 data_ov180_021c1e08[];
extern u8 data_ov180_021c1e0c[];

u32 data_ov180_021c1968[1]  = {0x00030000};
u32 data_ov180_021c196c[11] = {0x00000000, 0x00048000, 0x00000000, 0x00060000, 0x00000000, 0x00078000,
                               0x00000000, 0x00090000, 0x00000000, 0x000A8000, 0x00000000};
u32 data_ov180_021c1998[12] = {0x00000002,
                               0x000014C7,
                               0x0000152D,
                               0x00001539,
                               0x000014C7,
                               0x0000152B,
                               0x00000046,
                               (u32) &data_ov180_021c1ab0,
                               (u32) &data_ov180_021c1e04,
                               (u32) &data_ov180_021c1e0c,
                               (u32) &data_ov180_021c1e00,
                               (u32) &data_ov180_021c1e08};
