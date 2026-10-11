#include "m2c.h"
#include "engine.h"

void func_0202dd68(M2C_UNK);

extern M2C_UNK data_021417f4;

void func_0202ddcc(void) {
    s32 var_r5;
    s32 var_r6;

    var_r6 = 0;
    var_r5 = M2C_FIELD(&data_021417f4, s32 *, 0x14);
    if ((s32) M2C_FIELD(&data_021417f4, s32 *, 0x10) <= 0) {
        return;
    }
    do {
        func_0202dd68(var_r5);
        var_r6 += 1;
        var_r5 += 0x50;
    } while (var_r6 < (s32) M2C_FIELD(&data_021417f4, s32 *, 0x10));
}
