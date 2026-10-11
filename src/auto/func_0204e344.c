#include "m2c.h"

M2C_UNK func_0204dd14(s32, void *);                 /* extern */
M2C_UNK func_0204dee8();                            /* extern */
s32 func_02050190();                                /* extern */
M2C_UNK func_020501a4(s32);                         /* extern */
extern M2C_UNK data_0214dad4;

void func_0204e344(s32 arg0) {
    s32 temp_r4;
    void *temp_r5;

    temp_r4 = func_02050190();
    temp_r5 = *M2C_FIELD(&data_0214dad4, void ***, 8);
    if (arg0 != 0) {
        M2C_FIELD(temp_r5, s32 *, 0x78) = arg0;
        func_0204dd14(arg0, temp_r5);
    }
    M2C_FIELD(temp_r5, s32 *, 0x64) = 0;
    func_0204dee8();
    func_020501a4(temp_r4);
}
