#include "engine.h"
#include "m2c.h"

M2C_UNK func_02050190(void);
void func_020501a4(M2C_UNK);

extern M2C_UNK data_0214df34;

s32 func_0205195c(void) {
    M2C_UNK *var_r1;
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_02050190();
    var_r4  = 0;
    var_r1  = M2C_FIELD(&data_0214df34, M2C_UNK **, 8);
    if (var_r1 != NULL) {
        do {
            var_r1 = *var_r1;
            var_r4 += 1;
        } while (var_r1 != NULL);
    }
    func_020501a4(temp_r0);
    return var_r4;
}
