#include "m2c.h"

M2C_UNK func_02038bd8(M2C_UNK, s32);                /* extern */
extern M2C_UNK data_020a135c;
extern s32 data_020a1574;

void func_02012540(M2C_UNK arg0) {
    if (data_020a1574 == 0) {
        return;
    }
    func_02038bd8(arg0, M2C_FIELD(&data_020a135c, s32 *, 0x24));
}
