#include "m2c.h"

void *func_02004248();                              /* extern */
M2C_UNK func_0203df70(void *);                      /* extern */
M2C_UNK func_0203e5b0(void *);                      /* extern */
extern M2C_UNK data_0208c940;

s32 func_02004330(void) {
    s32 var_r0;
    void *temp_r0;

    temp_r0 = func_02004248();
    if (temp_r0 == NULL) {
        return -1;
    }
    if (M2C_FIELD(temp_r0, s32 *, 0x3C) & 1) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 1) {
        return 1;
    }
    func_0203df70(temp_r0 + 0x30);
    func_0203e5b0(temp_r0 + 4);
    M2C_FIELD(&data_0208c940, s32 *, 0x78) = 0;
    return 0;
}
