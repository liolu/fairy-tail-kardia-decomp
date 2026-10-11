#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0208661c;

s32 func_02020ae8(s32 arg0) {
    s32 var_r0;

    var_r0 = arg0;
    if (var_r0 == 0x64) {
        var_r0 = 0x17;
    }
    return *((M2C_UNK *)((s8 *)&data_0208661c + (var_r0 * 4)));
}
