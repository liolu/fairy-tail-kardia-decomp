/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov170_021b792c[];
extern u8 data_ov170_021b7c60[];
extern u8 data_ov170_021b7c64[];
extern u8 data_ov170_021b7c6c[];

u32 data_ov170_021b77f4[2] = {0x00001445, 0x00001451};
u32 data_ov170_021b77fc[7] = {0x000013C4,
                              0x00001443,
                              0x00000043,
                              (u32) &data_ov170_021b792c,
                              (u32) &data_ov170_021b7c6c,
                              (u32) &data_ov170_021b7c64,
                              (u32) &data_ov170_021b7c60};
