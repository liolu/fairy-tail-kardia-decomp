/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 func_ov121_021b0e1c[];
extern u8 func_ov121_021b1010[];
extern u8 func_ov121_021b1058[];
extern u8 func_ov121_021b10a0[];
extern u8 func_ov121_021b10e8[];

u32 data_ov121_021b33e8[1] = {0x00E700DD};
u32 data_ov121_021b33ec[2] = {0x027700F1, 0x02780278};
u32 data_ov121_021b33f4[6] = {0x02790279,
                              (u32) &func_ov121_021b0e1c,
                              (u32) &func_ov121_021b1010,
                              (u32) &func_ov121_021b1058,
                              (u32) &func_ov121_021b10a0,
                              (u32) &func_ov121_021b10e8};
