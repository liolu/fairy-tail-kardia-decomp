#include "m2c.h"

M2C_UNK func_0202ecac(M2C_UNK);                     /* extern */
M2C_UNK func_0202ecbc();                            /* extern */
s32 func_0205969c(M2C_UNK *, M2C_UNK);              /* extern */
extern M2C_UNK data_02141820;
extern M2C_UNK data_02142760;

s32 func_0202faa4(void) {
    if (M2C_FIELD(&data_02141820, s32 *, 0x18) == 6) {
        return 1;
    }
    if (M2C_FIELD(&data_02141820, s32 *, 0x18) != 4) {
        return 0;
    }
    func_0202ecac(6);
    if (func_0205969c(&data_02142760, 0xD) == 0) {
        return 1;
    }
    func_0202ecbc();
    return 0;
}
