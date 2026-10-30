/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov063_021bc550[];
extern u8 data_ov063_021bc800[];
extern u8 data_ov063_021bc80c[];

u32 data_ov063_021bc430[10] = {0x00000002,
                               0x00000697,
                               0x0000070A,
                               0x0000071B,
                               0x00000697,
                               0x00000708,
                               0x00000039,
                               (u32) &data_ov063_021bc550,
                               (u32) &data_ov063_021bc800,
                               (u32) &data_ov063_021bc80c};
