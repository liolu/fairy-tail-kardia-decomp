/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov184_021c1f38[];
extern u8 data_ov184_021c2300[];
extern u8 data_ov184_021c2304[];
extern u8 data_ov184_021c2308[];
extern u8 data_ov184_021c230c[];

u32 data_ov184_021c1dcc[7]  = {0x001F001E, 0x0020FFFF, 0xFFFF0021, 0x00230022, 0x0024FFFF, 0xFFFF0025, 0x00000026};
u32 data_ov184_021c1de8[12] = {0x00000002,
                               0x0000153A,
                               0x000015B6,
                               0x000015C1,
                               0x0000153A,
                               0x000015B4,
                               0x00000050,
                               (u32) &data_ov184_021c1f38,
                               (u32) &data_ov184_021c230c,
                               (u32) &data_ov184_021c2300,
                               (u32) &data_ov184_021c2304,
                               (u32) &data_ov184_021c2308};
u32 data_ov184_021c1e18[31] = {0x15471546, 0x15491548, 0x154B154A, 0x154D154C, 0x154F154E, 0x15601550, 0x155D155C, 0x155F155E,
                               0x15691561, 0x156B156A, 0x15631562, 0x15521551, 0x15541553, 0x15561555, 0x15581557, 0x155A1559,
                               0x155B1553, 0x156C1564, 0x156E156D, 0x1570156F, 0x15721571, 0x15BD15BC, 0x15BF15BE, 0x15C115C0,
                               0x15B815B7, 0x15BA15B9, 0x157915BB, 0x157B157A, 0x157B157B, 0x157D157C, 0x157F157E};
