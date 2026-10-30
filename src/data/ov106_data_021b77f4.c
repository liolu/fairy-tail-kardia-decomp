/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov106_021b7910[];
extern u8 data_ov106_021b7c00[];
extern u8 data_ov106_021b7c04[];
extern u8 data_ov106_021b7c08[];
extern u8 data_ov106_021b7c0c[];

u32 data_ov106_021b77f4[2] = {0x00000BD9, 0x00000C45};
u32 data_ov106_021b77fc[6] = {0x0000003D,
                              (u32) &data_ov106_021b7910,
                              (u32) &data_ov106_021b7c00,
                              (u32) &data_ov106_021b7c0c,
                              (u32) &data_ov106_021b7c08,
                              (u32) &data_ov106_021b7c04};
