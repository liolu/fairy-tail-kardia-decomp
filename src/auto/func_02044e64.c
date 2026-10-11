#include "m2c.h"
#include "engine.h"

extern void *data_0214d9d0;

void func_02044e64(s32 arg0, s32 arg1, s32 arg2) {
    M2C_UNK (*temp_r3)(arg0, arg1, arg2);

    temp_r3 = M2C_FIELD(data_0214d9d0, M2C_UNK (**)(), 0x14E4);
    if (temp_r3 == NULL) {
        return;
    }
    temp_r3(arg0, arg1, arg2);
}
