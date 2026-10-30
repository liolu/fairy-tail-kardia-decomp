/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 func_ov164_021bfc2c[];
extern u8 func_ov164_021bfe70[];
extern u8 func_ov164_021bfeb8[];
extern u8 func_ov164_021bff00[];
extern u8 func_ov164_021bff48[];

u32 data_ov164_021c1e70[3] = {0x001F001E, 0xFFFFFFFF, 0xFFFF0020};
u32 data_ov164_021c1e7c[6] = {0x0000FFFF,
                              (u32) &func_ov164_021bfc2c,
                              (u32) &func_ov164_021bfe70,
                              (u32) &func_ov164_021bfeb8,
                              (u32) &func_ov164_021bff00,
                              (u32) &func_ov164_021bff48};
