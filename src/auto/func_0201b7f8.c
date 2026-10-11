#include "m2c.h"

M2C_UNK func_0201b7cc(s32 *);                       /* extern */
extern M2C_UNK data_02135388;

void func_0201b7f8(void) {
    s32 *temp_r4;

    if (M2C_FIELD(&data_02135388, s32 *, 8) != 0) {
        temp_r4 = M2C_FIELD(&data_02135388, s32 **, 0);
        if (*temp_r4 != 0) {
            func_0201b7cc(temp_r4);
            *temp_r4 = 0;
        }
    }
}
