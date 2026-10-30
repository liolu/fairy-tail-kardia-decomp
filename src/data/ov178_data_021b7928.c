/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov178_021b7a70[];
extern u8 data_ov178_021b7dc0[];
extern u8 data_ov178_021b7dc4[];
extern u8 data_ov178_021b7dc8[];
extern u8 data_ov178_021b7dcc[];

u32 data_ov178_021b7928[1]  = {0x00030000};
u32 data_ov178_021b792c[11] = {0x00000000, 0x00048000, 0x00000000, 0x00060000, 0x00000000, 0x00078000,
                               0x00000000, 0x00090000, 0x00000000, 0x000A8000, 0x00000000};
u32 data_ov178_021b7958[12] = {0x00000002,
                               0x000014C7,
                               0x0000152D,
                               0x00001539,
                               0x000014C7,
                               0x0000152B,
                               0x00000046,
                               (u32) &data_ov178_021b7a70,
                               (u32) &data_ov178_021b7dc4,
                               (u32) &data_ov178_021b7dcc,
                               (u32) &data_ov178_021b7dc0,
                               (u32) &data_ov178_021b7dc8};
