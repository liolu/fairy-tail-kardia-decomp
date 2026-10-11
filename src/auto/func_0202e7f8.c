#include "m2c.h"
#include "engine.h"

void func_0202dd40(void);
void func_0202de3c(void);

extern M2C_UNK data_021417f4;

void func_0202e7f8(void) {
    if (M2C_FIELD(&data_021417f4, s32 *, 0xC) != 0) {
        func_0202de3c();
        func_0202dd40();
    }
    M2C_FIELD(&data_021417f4, s32 *, 0xC) = 0;
}
