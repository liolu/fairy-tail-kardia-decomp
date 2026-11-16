/* compiler: 2.0/sp1p5 -flag no-opt_common_subs */
#include "m2c.h"

M2C_UNK func_0204a820();                            /* extern */
extern M2C_UNK data_0214da28;

void func_0204a7b8(s32 arg0, s32 arg1) {
    M2C_FIELD(M2C_FIELD(&data_0214da28, void **, 4), s32 *, 0x5DC) = arg0;
    M2C_FIELD(M2C_FIELD(&data_0214da28, void **, 4), s32 *, 0x5E4) = arg1;
    M2C_FIELD(M2C_FIELD(&data_0214da28, void **, 4), s16 *, 0x584) = 0;
    M2C_FIELD(M2C_FIELD(&data_0214da28, void **, 4), void **, 0x580) =
        (void *) (M2C_FIELD(&data_0214da28, void **, 4) + 0x4C0);
    M2C_FIELD(M2C_FIELD(&data_0214da28, void **, 4), s32 *, 0x5EF8) = 1;
    M2C_FIELD(M2C_FIELD(&data_0214da28, void **, 4), s32 *, 0x5F00) = 0;
    M2C_FIELD(M2C_FIELD(&data_0214da28, void **, 4), s16 *, 0x5EE)  = 0;
    func_0204a820();
}
