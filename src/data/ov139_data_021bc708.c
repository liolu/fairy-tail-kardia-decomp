/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov139_021bc99c[];
extern u8 data_ov139_021bcca0[];
extern u8 data_ov139_021bcca4[];
extern u8 data_ov139_021bcca8[];
extern u8 data_ov139_021bccac[];

u32 data_ov139_021bc708[5]  = {0x00010265, 0x00020265, 0x00010265, 0x00020265, 0x00030266};
u32 data_ov139_021bc71c[12] = {0x00000002,
                               0x00000FA5,
                               0x00001025,
                               0x00001034,
                               0x00000FA5,
                               0x00001023,
                               0x0000003E,
                               (u32) &data_ov139_021bc99c,
                               (u32) &data_ov139_021bcca4,
                               (u32) &data_ov139_021bccac,
                               (u32) &data_ov139_021bcca0,
                               (u32) &data_ov139_021bcca8};
