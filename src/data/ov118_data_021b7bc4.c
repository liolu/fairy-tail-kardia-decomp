/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov118_021b7d28[];
extern u8 data_ov118_021b8080[];
extern u8 data_ov118_021b8084[];
extern u8 data_ov118_021b8088[];
extern u8 data_ov118_021b808c[];

u32 data_ov118_021b7bc4[5]  = {0x001F001E, 0x0020FFFF, 0xFFFF0021, 0x00230022, 0xFFFFFFFF};
u32 data_ov118_021b7bd8[12] = {0x00000002,
                               0x00000D41,
                               0x00000DC1,
                               0x00000DCC,
                               0x00000D41,
                               0x00000DBF,
                               0x00000045,
                               (u32) &data_ov118_021b7d28,
                               (u32) &data_ov118_021b8088,
                               (u32) &data_ov118_021b8080,
                               (u32) &data_ov118_021b8084,
                               (u32) &data_ov118_021b808c};
