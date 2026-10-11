#include "m2c.h"

M2C_UNK func_02031984(M2C_UNK *, M2C_UNK);          /* extern */
s32 func_02050190();                                /* extern */
M2C_UNK func_020501a4(s32);                         /* extern */
extern M2C_UNK data_0214b15c;

void func_0203a460(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_02050190();
    func_02031984(&data_0214b15c, arg0);
    func_020501a4(temp_r4);
}
