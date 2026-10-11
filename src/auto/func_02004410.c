#include "m2c.h"
#include "engine.h"

void func_02004384(M2C_UNK);

extern M2C_UNK data_0208c940;

void func_02004410(void) {
    s32 temp_r0;
    s32 var_r6;
    void *var_r7;

    var_r6 = 0;
    var_r7 = M2C_FIELD(&data_0208c940, void **, 0x70);
    if ((s32) M2C_FIELD(&data_0208c940, s32 *, 0x74) <= 0) {
        return;
    }
    do {
        temp_r0 = M2C_FIELD(var_r7, s32 *, 0);
        if ((temp_r0 != -1) && (M2C_FIELD(var_r7, s32 *, 0x78) != 0)) {
            func_02004384(temp_r0);
        }
        var_r6 += 1;
        var_r7 += 0x7C;
    } while (var_r6 < (s32) M2C_FIELD(&data_0208c940, s32 *, 0x74));
}
