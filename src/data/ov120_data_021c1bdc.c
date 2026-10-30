/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 func_ov120_021bfa60[];
extern u8 func_ov120_021bfd08[];
extern u8 func_ov120_021bfd50[];
extern u8 func_ov120_021bfd98[];
extern u8 func_ov120_021bfde0[];

u32 data_ov120_021c1bdc[3] = {0x00010266, 0x00010266, 0x00010266};
u32 data_ov120_021c1be8[6] = {0x00020266,
                              (u32) &func_ov120_021bfa60,
                              (u32) &func_ov120_021bfd08,
                              (u32) &func_ov120_021bfd50,
                              (u32) &func_ov120_021bfd98,
                              (u32) &func_ov120_021bfde0};
