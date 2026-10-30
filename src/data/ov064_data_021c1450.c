/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov064_021c1570[];
extern u8 data_ov064_021c1820[];
extern u8 data_ov064_021c182c[];

u32 data_ov064_021c1450[10] = {0x00000002,
                               0x00000697,
                               0x0000070A,
                               0x0000071B,
                               0x00000697,
                               0x00000708,
                               0x00000039,
                               (u32) &data_ov064_021c1570,
                               (u32) &data_ov064_021c1820,
                               (u32) &data_ov064_021c182c};
