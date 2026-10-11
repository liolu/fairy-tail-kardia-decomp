#include "m2c.h"

M2C_UNK func_02006214();                     /* extern */
M2C_UNK func_02012540();                     /* extern */
M2C_UNK func_0201f8c8();                         /* extern */
M2C_UNK func_0201f908();       /* extern */
M2C_UNK func_0201fa10();       /* extern */
u32 func_0202afbc();                                /* extern */
extern s32 data_0208cb24;
extern M2C_UNK data_02141334;

void func_0201f66c(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4, s32 arg5, s32 arg6) {
    M2C_UNK saved_reg_r4;
    M2C_UNK saved_reg_r5;
    M2C_UNK var_r4;
    M2C_UNK var_r5;
    u32 temp_r0;

    var_r4 = saved_reg_r4;
    var_r5 = saved_reg_r5;
    M2C_FIELD(&data_02141334, s32 *, 0x4BC) = (s32) (data_0208cb24 & 1);
    temp_r0 = func_0202afbc();
    switch (temp_r0) {
    default:
        break;
    case 0:
        var_r5 = arg0;
        var_r4 = 0;
        break;
    case 1:
        var_r5 = arg1;
        var_r4 = 1;
        break;
    case 2:
        var_r5 = arg2;
        var_r4 = 2;
        break;
    case 3:
        var_r5 = arg3;
        var_r4 = 3;
        break;
    }
    if (arg6 == 0) {
        if (arg5 != 0) {
            func_02012540(0);
        }
        func_02012540(0x1C);
        func_0201f8c8(arg4);
        func_02012540();
        func_0201f908(func_0202afbc(), 0, arg0);
        func_02012540();
        func_0201f908(func_0202afbc(), 1, arg1);
        func_02012540();
        func_0201f908(func_0202afbc(), 2, arg2);
        func_02012540();
        func_0201f908(func_0202afbc(), 3, arg3);
        func_02012540();
        func_0201fa10(func_0202afbc(), var_r4, var_r5);
        func_02012540();
        return;
    }
    if (arg5 != 0) {
        func_02006214(0);
    }
    func_02006214(0x1C);
    func_0201f8c8(arg4);
    func_02006214();
    func_0201f908(func_0202afbc(), 0, arg0);
    func_02006214();
    func_0201f908(func_0202afbc(), 1, arg1);
    func_02006214();
    func_0201f908(func_0202afbc(), 2, arg2);
    func_02006214();
    func_0201f908(func_0202afbc(), 3, arg3);
    func_02006214();
    func_0201fa10(func_0202afbc(), var_r4, var_r5);
    func_02006214();
}
