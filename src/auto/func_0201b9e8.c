#include "m2c.h"

M2C_UNK func_020084b0(s32, M2C_UNK);                /* extern */
M2C_UNK func_0201b8ec(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0201b94c(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0201b96c(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_02135388;

void func_0201b9e8(void) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    void *temp_r1;
    void *temp_r4;

    if (M2C_FIELD(&data_02135388, s32 *, 8) != 0) {
        temp_r4 = M2C_FIELD(&data_02135388, void **, 0);
        temp_r0 = M2C_FIELD(temp_r4, s32 *, 0);
        if ((temp_r0 != 0) && (temp_r0 != 1)) {
            temp_r0_2 = M2C_FIELD(temp_r4, s32 *, 4);
            if (temp_r0_2 != 0) {
                func_020084b0(temp_r0_2, 0);
            }
            temp_r0_3 = M2C_FIELD(temp_r4, s32 *, 0);
            switch (temp_r0_3) {                    /* irregular */
                case 2:
                    func_0201b8ec(temp_r4, 0, 1, 1);
                    break;
                case 3:
                    func_0201b94c(temp_r4, 0, 1, 1);
                    break;
                case 4:
                    func_0201b96c(temp_r4, 0, 1, 1);
                    break;
            }
            temp_r1 = M2C_FIELD(temp_r4, void **, 4);
            if (temp_r1 == NULL) {
                return;
            }
            M2C_FIELD(temp_r1, s32 *, 0)                        = (s32) M2C_FIELD(temp_r4, s32 *, 0x10);
            M2C_FIELD(M2C_FIELD(temp_r4, void **, 4), s32 *, 4) = (s32) M2C_FIELD(temp_r4, s32 *, 0x14);
            M2C_FIELD(M2C_FIELD(temp_r4, void **, 4), s32 *, 8) = (s32) M2C_FIELD(temp_r4, s32 *, 0x18);
        }
    }
}
