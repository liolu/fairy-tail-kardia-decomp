/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov068_021c13ec[];
extern u8 data_ov068_021c16c0[];
extern u8 data_ov068_021c16c4[];
extern u8 data_ov068_021c16c8[];
extern u8 data_ov068_021c16cc[];

u32 data_ov068_021c12c0[7]  = {0x001CFFFF, 0xFFFFFFFF, 0xFFFF001C, 0x001CFFFF, 0xFFFFFFFF, 0xFFFF001D, 0x0000001E};
u32 data_ov068_021c12dc[12] = {0x00000002,
                               0x0000071C,
                               0x00000788,
                               0x0000078F,
                               0x0000071C,
                               0x00000786,
                               0x0000003C,
                               (u32) &data_ov068_021c13ec,
                               (u32) &data_ov068_021c16c4,
                               (u32) &data_ov068_021c16cc,
                               (u32) &data_ov068_021c16c0,
                               (u32) &data_ov068_021c16c8};
