/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov144_021c22cc[];
extern u8 data_ov144_021c26c0[];
extern u8 data_ov144_021c26c4[];
extern u8 data_ov144_021c26c8[];
extern u8 data_ov144_021c26cc[];
extern u8 func_ov144_021bf9c4[];
extern u8 func_ov144_021bfd04[];
extern u8 func_ov144_021bfd4c[];
extern u8 func_ov144_021bfd94[];
extern u8 func_ov144_021bfddc[];

u32 data_ov144_021c2124[4]  = {0x02650001, 0x02650001, 0x02650001, 0x02660001};
u32 data_ov144_021c2134[5]  = {0x00000002, (u32) &func_ov144_021bf9c4, (u32) &func_ov144_021bfd04, (u32) &func_ov144_021bfd4c,
                               (u32) &func_ov144_021bfd94};
u32 data_ov144_021c2148[6]  = {(u32) &func_ov144_021bfddc, 0x0277029E, 0x0277029E, 0x0278029F, 0x0278029F, 0x027902A0};
u32 data_ov144_021c2160[12] = {0x00000002,
                               0x00001035,
                               0x000010A3,
                               0x000010AB,
                               0x00001035,
                               0x000010A1,
                               0x00000054,
                               (u32) &data_ov144_021c22cc,
                               (u32) &data_ov144_021c26c4,
                               (u32) &data_ov144_021c26cc,
                               (u32) &data_ov144_021c26c8,
                               (u32) &data_ov144_021c26c0};
