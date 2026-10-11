#include "m2c.h"

M2C_UNK func_0204e0f8(void *, M2C_UNK *, void *, M2C_UNK *, s32, s32); /* extern */
M2C_UNK func_0204e3fc(void *);                      /* extern */
s32 func_02050190();                                /* extern */
M2C_UNK func_020501a4(s32);                         /* extern */
M2C_UNK func_0205a16c(M2C_UNK *);                   /* extern */
extern void *data_02150b08;
extern M2C_UNK data_02150b0c;
extern M2C_UNK data_02150f30;
extern M2C_UNK func_0205a180;

void func_0205a0e0(void *arg0) {
    s32 temp_r4;

    temp_r4 = func_02050190();
    if (data_02150b08 == NULL) {
        data_02150b08 = arg0;
        func_0205a16c(arg0 + 0xC4);
        func_0205a16c(&data_02150b0c);
        M2C_FIELD(arg0, s32 *, 0xC0) = 0;
        func_0204e0f8(arg0, &func_0205a180, arg0, &data_02150f30, 0x400, 0x14);
        func_0204e3fc(arg0);
    }
    func_020501a4(temp_r4);
}
