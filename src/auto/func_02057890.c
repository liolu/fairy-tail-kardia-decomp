#include "engine.h"
#include "m2c.h"

M2C_UNK func_02050190(void);
void func_020501a4(M2C_UNK);

extern M2C_UNK data_0214fdec;

s32 func_02057890(void) {
    s32 temp_r0;
    u16 var_r4;

    temp_r0 = func_02050190();
    if (M2C_FIELD(&data_0214fdec, void **, 4) != NULL) {
        var_r4 = M2C_FIELD(M2C_FIELD(&data_0214fdec, void **, 4), u16 *, 0x150);
    } else {
        var_r4 = 0;
    }
    func_020501a4(temp_r0);
    return (s32) var_r4;
}
