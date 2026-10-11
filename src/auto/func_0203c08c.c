#include "m2c.h"

M2C_UNK func_02000b64(s32);                         /* extern */
M2C_UNK func_0203b458();                            /* extern */
s32 func_0203b668();                                /* extern */
M2C_UNK func_0203b860(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02050414();                            /* extern */
extern M2C_UNK data_0214cc40;

void func_0203c08c(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_02000b64(0x02000BAC);
    func_0203b458();
    if (arg0 != (arg0 & func_0203b668())) {
        func_02050414();
    }
    func_0203b860(&data_0214cc40, 1, arg1, arg2);
}
