/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov115_021bd5e0[];
extern u8 data_ov115_021bd9e0[];
extern u8 data_ov115_021bd9e4[];
extern u8 data_ov115_021bd9e8[];
extern u8 data_ov115_021bd9ec[];

u32 data_ov115_021bd3f8[1]  = {0x00024000};
u32 data_ov115_021bd3fc[11] = {0x00028000, 0x00024000, 0x00028000, 0x00024000, 0x00018000, 0x00018000,
                               0x00020000, 0x00024000, 0x00024000, 0x00024000, 0x0001C000};
u32 data_ov115_021bd428[12] = {0x00000002,
                               0x00000CCF,
                               0x00000D39,
                               0x00000D40,
                               0x00000CCF,
                               0x00000D37,
                               0x00000054,
                               (u32) &data_ov115_021bd5e0,
                               (u32) &data_ov115_021bd9e4,
                               (u32) &data_ov115_021bd9e8,
                               (u32) &data_ov115_021bd9ec,
                               (u32) &data_ov115_021bd9e0};
