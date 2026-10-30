/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov066_021b73ac[];
extern u8 data_ov066_021b7680[];
extern u8 data_ov066_021b7684[];
extern u8 data_ov066_021b7688[];
extern u8 data_ov066_021b768c[];

u32 data_ov066_021b7280[7]  = {0x001CFFFF, 0xFFFFFFFF, 0xFFFF001C, 0x001CFFFF, 0xFFFFFFFF, 0xFFFF001D, 0x0000001E};
u32 data_ov066_021b729c[12] = {0x00000002,
                               0x0000071C,
                               0x00000788,
                               0x0000078F,
                               0x0000071C,
                               0x00000786,
                               0x0000003C,
                               (u32) &data_ov066_021b73ac,
                               (u32) &data_ov066_021b7684,
                               (u32) &data_ov066_021b768c,
                               (u32) &data_ov066_021b7680,
                               (u32) &data_ov066_021b7688};
