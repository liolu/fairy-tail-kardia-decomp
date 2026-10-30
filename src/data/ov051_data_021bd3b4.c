/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov051_021bd510[];
extern u8 data_ov051_021bd8a0[];
extern u8 data_ov051_021bd8a4[];
extern u8 data_ov051_021bd8a8[];
extern u8 data_ov051_021bd8ac[];

u32 data_ov051_021bd3b4[6]  = {0x00020274, 0x00020274, 0x00020274, 0x00020274, 0x00020274, 0x00020275};
u32 data_ov051_021bd3cc[12] = {0x00000002,
                               0x00000538,
                               0x000005A9,
                               0x000005B2,
                               0x00000538,
                               0x000005A7,
                               0x0000004B,
                               (u32) &data_ov051_021bd510,
                               (u32) &data_ov051_021bd8a4,
                               (u32) &data_ov051_021bd8ac,
                               (u32) &data_ov051_021bd8a8,
                               (u32) &data_ov051_021bd8a0};
