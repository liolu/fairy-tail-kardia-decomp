#include "m2c.h"

M2C_UNK func_0203b4ac(u16);                         /* extern */
M2C_UNK func_0203b51c(u16);                         /* extern */
extern M2C_UNK data_0214d77c;

s32 func_0203fe58(s32 arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
    case 9:
        func_0203b4ac((u16) M2C_FIELD(&data_0214d77c, s32 *, 4));
        return 0;
    case 10:
        func_0203b51c((u16) M2C_FIELD(&data_0214d77c, s32 *, 4));
        return 0;
    case 1:
        return 4;
    default:
        return 0x102;
    }
}
