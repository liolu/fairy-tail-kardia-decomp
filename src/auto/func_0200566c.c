#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0208c9dc;

void func_0200566c(s32 arg0, s32 arg1, s32 arg2) {
    *((M2C_UNK *)((s8 *)&data_0208c9dc + (arg0 * 8))) = arg1;
    M2C_FIELD(((M2C_UNK *)((s8 *)&data_0208c9dc + (arg0 * 8))), s32 *, 4) = arg2;
}
