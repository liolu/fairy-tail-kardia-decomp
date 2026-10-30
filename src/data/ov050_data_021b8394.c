/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov050_021b84f0[];
extern u8 data_ov050_021b8880[];
extern u8 data_ov050_021b8884[];
extern u8 data_ov050_021b8888[];
extern u8 data_ov050_021b888c[];

u32 data_ov050_021b8394[6]  = {0x00020274, 0x00020274, 0x00020274, 0x00020274, 0x00020274, 0x00020275};
u32 data_ov050_021b83ac[12] = {0x00000002,
                               0x00000538,
                               0x000005A9,
                               0x000005B2,
                               0x00000538,
                               0x000005A7,
                               0x0000004B,
                               (u32) &data_ov050_021b84f0,
                               (u32) &data_ov050_021b8884,
                               (u32) &data_ov050_021b888c,
                               (u32) &data_ov050_021b8888,
                               (u32) &data_ov050_021b8880};
