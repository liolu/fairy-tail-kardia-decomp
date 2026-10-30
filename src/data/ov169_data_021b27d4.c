/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov169_021b290c[];
extern u8 data_ov169_021b2c40[];
extern u8 data_ov169_021b2c44[];
extern u8 data_ov169_021b2c4c[];

u32 data_ov169_021b27d4[2] = {0x00001445, 0x00001451};
u32 data_ov169_021b27dc[7] = {0x000013C4,
                              0x00001443,
                              0x00000043,
                              (u32) &data_ov169_021b290c,
                              (u32) &data_ov169_021b2c4c,
                              (u32) &data_ov169_021b2c44,
                              (u32) &data_ov169_021b2c40};
