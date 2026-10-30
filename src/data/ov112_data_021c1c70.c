/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 func_ov112_021bfa08[];
extern u8 func_ov112_021bff28[];
extern u8 func_ov112_021bff94[];
extern u8 func_ov112_021c0000[];
extern u8 func_ov112_021c006c[];

u32 data_ov112_021c1c70[4] = {0x00010265, 0x00020265, 0x00010265, 0x00020265};
u32 data_ov112_021c1c80[6] = {0x00020266,
                              (u32) &func_ov112_021bfa08,
                              (u32) &func_ov112_021bff28,
                              (u32) &func_ov112_021bff94,
                              (u32) &func_ov112_021c0000,
                              (u32) &func_ov112_021c006c};
