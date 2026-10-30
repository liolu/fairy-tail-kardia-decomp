/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov141_021b326c[];
extern u8 data_ov141_021b3660[];
extern u8 data_ov141_021b3664[];
extern u8 data_ov141_021b3668[];
extern u8 data_ov141_021b366c[];
extern u8 func_ov141_021b0964[];
extern u8 func_ov141_021b0ca4[];
extern u8 func_ov141_021b0cec[];
extern u8 func_ov141_021b0d34[];
extern u8 func_ov141_021b0d7c[];

u32 data_ov141_021b30c4[4]  = {0x02650001, 0x02650001, 0x02650001, 0x02660001};
u32 data_ov141_021b30d4[5]  = {0x00000002, (u32) &func_ov141_021b0964, (u32) &func_ov141_021b0ca4, (u32) &func_ov141_021b0cec,
                               (u32) &func_ov141_021b0d34};
u32 data_ov141_021b30e8[6]  = {(u32) &func_ov141_021b0d7c, 0x0277029E, 0x0277029E, 0x0278029F, 0x0278029F, 0x027902A0};
u32 data_ov141_021b3100[12] = {0x00000002,
                               0x00001035,
                               0x000010A3,
                               0x000010AB,
                               0x00001035,
                               0x000010A1,
                               0x00000054,
                               (u32) &data_ov141_021b326c,
                               (u32) &data_ov141_021b3664,
                               (u32) &data_ov141_021b366c,
                               (u32) &data_ov141_021b3668,
                               (u32) &data_ov141_021b3660};
