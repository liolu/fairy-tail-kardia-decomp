/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov082_021b7acc[];
extern u8 data_ov082_021b7e80[];
extern u8 data_ov082_021b7e84[];
extern u8 data_ov082_021b7e88[];
extern u8 data_ov082_021b7e8c[];

u32 data_ov082_021b7984[5]  = {0x00210020, 0x0022FFFF, 0xFFFF0023, 0x00250024, 0xFFFFFFFF};
u32 data_ov082_021b7998[12] = {0x00000002,
                               0x000008E8,
                               0x00000962,
                               0x0000096C,
                               0x000008E8,
                               0x00000960,
                               0x0000004E,
                               (u32) &data_ov082_021b7acc,
                               (u32) &data_ov082_021b7e88,
                               (u32) &data_ov082_021b7e8c,
                               (u32) &data_ov082_021b7e84,
                               (u32) &data_ov082_021b7e80};
