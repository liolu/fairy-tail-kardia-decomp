#include "m2c.h"

M2C_UNK func_02031a8c(M2C_UNK, void *);             /* extern */
void *func_02031aec(M2C_UNK, M2C_UNK);              /* extern */
s32 func_02050190();                                /* extern */
M2C_UNK func_020501a4(s32);                         /* extern */

void *func_0203a3cc(M2C_UNK arg0) {
    s32 temp_r4;
    void *temp_r0;
    void *temp_r1;

    temp_r4 = func_02050190();
    temp_r0 = func_02031aec(arg0, 0);
    if (temp_r0 != NULL) {
        func_02031a8c(arg0, temp_r0);
        temp_r1 = M2C_FIELD(temp_r0, void **, 8);
        M2C_FIELD(temp_r1, s32 *, 0x124) = (s32) (M2C_FIELD(temp_r1, s32 *, 0x124) - 1);
    }
    func_020501a4(temp_r4);
    return temp_r0;
}
