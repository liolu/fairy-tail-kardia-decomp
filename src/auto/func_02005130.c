#include "m2c.h"
#include "engine.h"

M2C_UNK func_02005028(void);
void func_0200506c(M2C_UNK);

void func_02005130(s32 arg0) {
    s32 var_r0;

    var_r0 = arg0;
    if ((var_r0 >= 0) && (var_r0 < 0x64)) {
        var_r0 = func_02005028();
    }
    func_0200506c(var_r0);
}
