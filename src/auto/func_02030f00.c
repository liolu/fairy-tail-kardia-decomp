#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_021446a0;

void func_02030f00(s32 arg0) {
    M2C_FIELD(&data_021446a0, s16 *, 8) = (s16) arg0;
}
