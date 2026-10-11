#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0214fa00;

void func_02051b24(s32 arg0) {
    s32 temp_r1;

    temp_r1 = (arg0 * 0xC) + (s32) &data_0214fa00;
    M2C_FIELD(temp_r1, u8 *, 8) = (u8) (M2C_FIELD(temp_r1, u8 *, 8) + 1);
}
