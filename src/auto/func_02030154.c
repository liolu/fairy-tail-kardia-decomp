#include "m2c.h"

M2C_UNK func_0202ecac(M2C_UNK);                     /* extern */
M2C_UNK func_0202ecbc();                            /* extern */
s32 func_02057f2c(M2C_UNK *, M2C_UNK *, M2C_UNK);   /* extern */
extern M2C_UNK data_021437a0;
extern M2C_UNK func_02030198;

s32 func_02030154(void) {
    func_0202ecac(3);
    if (func_02057f2c(&data_021437a0, &func_02030198, 2) == 2) {
        return 1;
    }
    func_0202ecbc();
    func_0202ecac(0xA);
    return 0;
}
