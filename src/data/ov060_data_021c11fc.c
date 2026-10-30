/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov060_021c1330[];
extern u8 data_ov060_021c1624[];

u32 data_ov060_021c11fc[3] = {0x00000002, 0x0000061A, 0x0000068C};
u32 data_ov060_021c1208[6] = {
    0x00000696, 0x0000061A, 0x0000068A, 0x0000003D, (u32) &data_ov060_021c1330, (u32) &data_ov060_021c1624};
