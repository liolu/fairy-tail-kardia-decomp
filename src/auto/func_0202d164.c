#include "engine.h"
#include "m2c.h"

void func_0202d0d4(M2C_UNK);

extern M2C_UNK data_0213eba0;

void func_0202d164(s32 arg0) {
    func_0202d0d4(1);
    M2C_FIELD(&data_0213eba0, s32 *, 0x54) = 0;
    M2C_FIELD(&data_0213eba0, s32 *, 0x44) = 2;
    M2C_FIELD(&data_0213eba0, s32 *, 0x48) = arg0;
    M2C_FIELD(&data_0213eba0, s32 *, 0x4C) = 0;
    M2C_FIELD(&data_0213eba0, s32 *, 0x60) = 0;
    M2C_FIELD(&data_0213eba0, s32 *, 0x58) = 0;
}
