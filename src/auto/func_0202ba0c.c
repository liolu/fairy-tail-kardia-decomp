#include "m2c.h"

M2C_UNK func_0202bc38(s32, s32, s32, u16, s32);     /* extern */
M2C_UNK func_0202bd78();                            /* extern */
extern M2C_UNK data_0213e204;

void func_0202ba0c(void) {
    if (M2C_FIELD(&data_0213e204, s32 *, 0x70) == 0) {
        return;
    }
    M2C_FIELD(&data_0213e204, s32 *, 0x9C) = 0;
    if (M2C_FIELD(&data_0213e204, s32 *, 0x98) == 0) {
        func_0202bc38(M2C_FIELD(&data_0213e204, s32 *, 0x74), M2C_FIELD(&data_0213e204, s32 *, 0x78), (M2C_FIELD(&data_0213e204, s32 *, 0x7C) + (M2C_FIELD(&data_0213e204, s32 *, 0x80) << 5)) * 2, M2C_FIELD(&data_0213e204, u16 *, 0x8C), M2C_FIELD(&data_0213e204, s32 *, 0x90));
        return;
    }
    func_0202bd78();
}
