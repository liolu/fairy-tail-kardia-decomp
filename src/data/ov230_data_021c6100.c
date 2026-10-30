/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov230_021c6138[];
extern u8 data_ov230_021c626c[];

u32 data_ov230_021c6100[2]  = {(u32) &data_ov230_021c6138, (u32) &data_ov230_021c626c};
u32 data_ov230_021c6108[12] = {0xFFF48000, 0x00320000, 0x00000000, 0x000B8000, 0x00320000, 0x00000001,
                               0xFFF78000, 0x00370000, 0x00000000, 0x00088000, 0x00370000, 0x00000001};
