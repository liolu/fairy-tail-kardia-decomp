#include "engine.h"
#include "m2c.h"

void func_0204cb8c(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_0214da34;

void func_0204bcb8(s32 arg0) {
    M2C_FIELD(&data_0214da34, s32 *, 4) = arg0;
    func_0204cb8c(arg0, 0, 0x21C);
}
