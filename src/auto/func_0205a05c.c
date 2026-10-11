#include "m2c.h"
#include "engine.h"

void func_02050414(void);
void func_0205a0b8(void);

extern M2C_UNK data_02150928;

void func_0205a05c(s32 arg0, s32 arg1) {
    s32 var_r0;

    if ((arg1 & 0x3F) == 0x11) {
        if (M2C_FIELD(&data_02150928, s32 *, 0xC) != 0) {
            return;
        }
        var_r0 = 0;
        if (M2C_FIELD(&data_02150928, s32 (**)(), 0x18) != NULL) {
            var_r0 = M2C_FIELD(&data_02150928, s32 (**)(), 0x18)();
        }
        if (var_r0 != 0) {
            func_0205a0b8();
        }
        M2C_FIELD(&data_02150928, s32 *, 0xC) = 1;
        return;
    }
    func_02050414();
}
