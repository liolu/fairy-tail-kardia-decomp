#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0208d3a4;

void func_02003fb0(s32 arg0, s32 arg1) {
    M2C_FIELD(((arg0 * 0x18) + (s32) &data_0208d3a4), s32 *, 0xC) = arg1;
}
