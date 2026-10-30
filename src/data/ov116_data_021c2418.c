/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov116_021c2600[];
extern u8 data_ov116_021c2a00[];
extern u8 data_ov116_021c2a04[];
extern u8 data_ov116_021c2a08[];
extern u8 data_ov116_021c2a0c[];

u32 data_ov116_021c2418[1]  = {0x00024000};
u32 data_ov116_021c241c[11] = {0x00028000, 0x00024000, 0x00028000, 0x00024000, 0x00018000, 0x00018000,
                               0x00020000, 0x00024000, 0x00024000, 0x00024000, 0x0001C000};
u32 data_ov116_021c2448[12] = {0x00000002,
                               0x00000CCF,
                               0x00000D39,
                               0x00000D40,
                               0x00000CCF,
                               0x00000D37,
                               0x00000054,
                               (u32) &data_ov116_021c2600,
                               (u32) &data_ov116_021c2a04,
                               (u32) &data_ov116_021c2a08,
                               (u32) &data_ov116_021c2a0c,
                               (u32) &data_ov116_021c2a00};
