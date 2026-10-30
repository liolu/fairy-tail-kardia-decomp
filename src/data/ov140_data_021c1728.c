/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov140_021c19bc[];
extern u8 data_ov140_021c1cc0[];
extern u8 data_ov140_021c1cc4[];
extern u8 data_ov140_021c1cc8[];
extern u8 data_ov140_021c1ccc[];

u32 data_ov140_021c1728[5]  = {0x00010265, 0x00020265, 0x00010265, 0x00020265, 0x00030266};
u32 data_ov140_021c173c[12] = {0x00000002,
                               0x00000FA5,
                               0x00001025,
                               0x00001034,
                               0x00000FA5,
                               0x00001023,
                               0x0000003E,
                               (u32) &data_ov140_021c19bc,
                               (u32) &data_ov140_021c1cc4,
                               (u32) &data_ov140_021c1ccc,
                               (u32) &data_ov140_021c1cc0,
                               (u32) &data_ov140_021c1cc8};
