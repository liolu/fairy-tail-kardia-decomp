#include "m2c.h"

M2C_UNK func_0202ecac(M2C_UNK);                     /* extern */
M2C_UNK func_0202ecbc();                            /* extern */
s32 func_02058024(M2C_UNK *, M2C_UNK *);            /* extern */
extern M2C_UNK data_021418c0;
extern M2C_UNK func_0202ed18;

s32 func_0202ecd8(void) {
    func_0202ecac(3);
    if (func_02058024(&func_0202ed18, &data_021418c0) == 2) {
        return 1;
    }
    func_0202ecbc();
    func_0202ecac(9);
    return 0;
}
