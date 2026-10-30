/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov053_021b2e38[];
extern u8 data_ov053_021b3120[];
extern u8 data_ov053_021b3124[];
extern u8 data_ov053_021b3128[];
extern u8 data_ov053_021b312c[];
extern u8 func_ov053_021b0a4c[];
extern u8 func_ov053_021b0c80[];
extern u8 func_ov053_021b0cc8[];
extern u8 func_ov053_021b0d10[];
extern u8 func_ov053_021b0d58[];

u32 data_ov053_021b2bdc[3]  = {0x00010265, 0x00010265, 0x00010266};
u32 data_ov053_021b2be8[5]  = {(u32) &func_ov053_021b0a4c, (u32) &func_ov053_021b0c80, (u32) &func_ov053_021b0cc8,
                               (u32) &func_ov053_021b0d10, (u32) &func_ov053_021b0d58};
u32 data_ov053_021b2bfc[12] = {0x00000002,
                               0x000005B3,
                               0x00000613,
                               0x00000619,
                               0x000005B3,
                               0x00000611,
                               0x0000003E,
                               (u32) &data_ov053_021b2e38,
                               (u32) &data_ov053_021b3128,
                               (u32) &data_ov053_021b312c,
                               (u32) &data_ov053_021b3124,
                               (u32) &data_ov053_021b3120};
