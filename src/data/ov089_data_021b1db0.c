/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov089_021b1edc[];
extern u8 data_ov089_021b2180[];
extern u8 data_ov089_021b2184[];
extern u8 data_ov089_021b2188[];
extern u8 data_ov089_021b218c[];

u32 data_ov089_021b1db0[5]  = {0x00010265, 0x00010265, 0x00010265, 0x00010265, 0x00040266};
u32 data_ov089_021b1dc4[12] = {0x00000002,
                               0x000009FA,
                               0x00000A63,
                               0x00000A6A,
                               0x000009FA,
                               0xFFFFFFFF,
                               0x00000037,
                               (u32) &data_ov089_021b1edc,
                               (u32) &data_ov089_021b2180,
                               (u32) &data_ov089_021b2184,
                               (u32) &data_ov089_021b218c,
                               (u32) &data_ov089_021b2188};
u32 data_ov089_021b1df4[27] = {0x0A070A06, 0x0A090A08, 0x0A0B0A0A, 0x0A0D0A0C, 0x0A0F0A0E, 0x0A200A10, 0x0A1D0A1C,
                               0x0A1F0A1E, 0x0A290A21, 0x0A2B0A2A, 0x0A2D0A2C, 0x0A220A2E, 0x0A110A23, 0x0A130A12,
                               0x0A150A14, 0x0A170A16, 0x0A190A18, 0x0A130A1A, 0x0A240A1B, 0x0A300A2F, 0x0A320A31,
                               0x0A670A33, 0x0A690A68, 0x0A640A6A, 0x0A660A65, 0x0A390A38, 0x0A3B0A3A};
