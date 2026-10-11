#include "m2c.h"

M2C_UNK func_020312c0();                            /* extern */
M2C_UNK func_02031480(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK *); /* extern */
M2C_UNK func_02050414();                            /* extern */
M2C_UNK func_02055f6c(s32, s32, M2C_UNK *, M2C_UNK *, s32); /* extern */
s32 func_02056db0(s32, s32, s32);                   /* extern */
extern M2C_UNK data_02144720;
extern M2C_UNK data_0214472c;
extern M2C_UNK func_02031570;
extern M2C_UNK func_02031574;

void func_020316a0(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 temp_r4;

    func_02031480(arg1, arg2, arg3, arg0, 0xE2C, &func_02031574);
    temp_r4 = M2C_FIELD(&data_02144720, s32 *, 0x24);
    M2C_FIELD(&data_02144720, s32 *, 0x28) = temp_r4;
    func_02055f6c(temp_r4, temp_r4, &func_02031570, &data_0214472c, arg4);
    if (func_02056db0(temp_r4, arg5, arg6) == 0) {
        func_02050414();
    }
    M2C_FIELD(&data_02144720, s32 *, 0) = 1;
    M2C_FIELD(&data_02144720, s32 *, 8) = (s32) (M2C_FIELD(&data_02144720, s32 *, 8) | 4);
    func_020312c0();
}
