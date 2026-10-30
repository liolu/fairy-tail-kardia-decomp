/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov172_021c196c[];
extern u8 data_ov172_021c1ca0[];
extern u8 data_ov172_021c1ca4[];
extern u8 data_ov172_021c1cac[];

u32 data_ov172_021c1834[2] = {0x00001445, 0x00001451};
u32 data_ov172_021c183c[7] = {0x000013C4,
                              0x00001443,
                              0x00000043,
                              (u32) &data_ov172_021c196c,
                              (u32) &data_ov172_021c1cac,
                              (u32) &data_ov172_021c1ca4,
                              (u32) &data_ov172_021c1ca0};
