/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov086_021b7764[];
extern u8 data_ov086_021b7a40[];
extern u8 data_ov086_021b7a44[];
extern u8 data_ov086_021b7a48[];
extern u8 data_ov086_021b7a4c[];

u32 data_ov086_021b7560[1]  = {0x000009F9};
u32 data_ov086_021b7564[18] = {0x0000096D,
                               0x000009ED,
                               0x0000003C,
                               (u32) &data_ov086_021b7764,
                               (u32) &data_ov086_021b7a44,
                               (u32) &data_ov086_021b7a4c,
                               (u32) &data_ov086_021b7a48,
                               (u32) &data_ov086_021b7a40,
                               0x00010000,
                               0x00020000,
                               0xFFFFFFFF,
                               0xFFFFFFFF,
                               0xFFFFFFFF,
                               0xFFFFFFFF,
                               0xFFFFFFFF,
                               0xFFFFFFFF,
                               0xFFFFFFFF,
                               0xFFFFFFFF};
