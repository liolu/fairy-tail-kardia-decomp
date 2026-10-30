/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov154_021b78f8[];
extern u8 data_ov154_021b7c40[];
extern u8 data_ov154_021b7c44[];
extern u8 data_ov154_021b7c48[];
extern u8 data_ov154_021b7c4c[];
extern u8 func_ov154_021b57bc[];
extern u8 func_ov154_021b5908[];
extern u8 func_ov154_021b5950[];
extern u8 func_ov154_021b5998[];
extern u8 func_ov154_021b59e0[];

u32 data_ov154_021b7768[3]  = {0x02650001, 0x02650001, 0x02660002};
u32 data_ov154_021b7774[6]  = {0x00000001,
                               (u32) &func_ov154_021b57bc,
                               (u32) &func_ov154_021b5908,
                               (u32) &func_ov154_021b5950,
                               (u32) &func_ov154_021b5998,
                               (u32) &func_ov154_021b59e0};
u32 data_ov154_021b778c[12] = {0x00000002,
                               0x00001185,
                               0x00001214,
                               0x00001224,
                               0x00001185,
                               0x00001212,
                               0x00000044,
                               (u32) &data_ov154_021b78f8,
                               (u32) &data_ov154_021b7c40,
                               (u32) &data_ov154_021b7c44,
                               (u32) &data_ov154_021b7c4c,
                               (u32) &data_ov154_021b7c48};
