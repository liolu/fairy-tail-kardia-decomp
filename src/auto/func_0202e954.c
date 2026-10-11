#include "m2c.h"
#include "engine.h"

void func_0202e924(M2C_UNK);

extern M2C_UNK data_021417f4;

void func_0202e954(void) {
    s32 var_r5;
    s32 var_r6;

    var_r6 = 0;
    var_r5 = M2C_FIELD(&data_021417f4, s32 *, 8);
    if ((s32) M2C_FIELD(&data_021417f4, s32 *, 4) <= 0) {
        return;
    }
    do {
        func_0202e924(var_r5);
        var_r6 += 1;
        var_r5 += 0x20;
    } while (var_r6 < (s32) M2C_FIELD(&data_021417f4, s32 *, 4));
}
