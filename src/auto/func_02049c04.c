#include "m2c.h"

M2C_UNK func_02049a34();                            /* extern */
extern M2C_UNK data_0214d9c0;

void func_02049c04(s32 arg0) {
    M2C_FIELD(M2C_FIELD(&data_0214d9c0, void **, 0x10), s32 *, 0x1320) = 1;
    func_02049a34(arg0);
}
