#include "engine.h"
#include "m2c.h"

void func_02022a34(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_02022a90(M2C_UNK, M2C_UNK);
void func_ov005_02157a50(M2C_UNK);

void func_020247bc(s32 arg0) {
    s32 var_r5;

    func_ov005_02157a50(0x13);
    var_r5 = 0x57;
    do {
        if (func_02022a90(arg0, var_r5) == 0) {
            func_02022a34(arg0, var_r5, 1);
        }
        var_r5 += 1;
    } while (var_r5 <= 0x6E);
}
