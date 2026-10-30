/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov120_021c1d68[];
extern u8 data_ov120_021c20c0[];
extern u8 data_ov120_021c20c4[];
extern u8 data_ov120_021c20c8[];
extern u8 data_ov120_021c20cc[];

u32 data_ov120_021c1c04[5]  = {0x001F001E, 0x0020FFFF, 0xFFFF0021, 0x00230022, 0xFFFFFFFF};
u32 data_ov120_021c1c18[12] = {0x00000002,
                               0x00000D41,
                               0x00000DC1,
                               0x00000DCC,
                               0x00000D41,
                               0x00000DBF,
                               0x00000045,
                               (u32) &data_ov120_021c1d68,
                               (u32) &data_ov120_021c20c8,
                               (u32) &data_ov120_021c20c0,
                               (u32) &data_ov120_021c20c4,
                               (u32) &data_ov120_021c20cc};
