/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov117_021b2d08[];
extern u8 data_ov117_021b3060[];
extern u8 data_ov117_021b3064[];
extern u8 data_ov117_021b3068[];
extern u8 data_ov117_021b306c[];

u32 data_ov117_021b2ba4[5]  = {0x001F001E, 0x0020FFFF, 0xFFFF0021, 0x00230022, 0xFFFFFFFF};
u32 data_ov117_021b2bb8[12] = {0x00000002,
                               0x00000D41,
                               0x00000DC1,
                               0x00000DCC,
                               0x00000D41,
                               0x00000DBF,
                               0x00000045,
                               (u32) &data_ov117_021b2d08,
                               (u32) &data_ov117_021b3068,
                               (u32) &data_ov117_021b3060,
                               (u32) &data_ov117_021b3064,
                               (u32) &data_ov117_021b306c};
