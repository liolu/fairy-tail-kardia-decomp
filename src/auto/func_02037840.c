#include "m2c.h"
#include "engine.h"

void func_020378e4(M2C_UNK);
void func_02050ff8(M2C_UNK);
void func_02051080(M2C_UNK, M2C_UNK);

void func_02037840(s32 arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) == 2) {
        func_02051080((s32) M2C_FIELD(arg0, u8 *, 0x3C), -0x2D3);
    }
    func_02050ff8((s32) M2C_FIELD(arg0, u8 *, 0x3C));
    func_020378e4(arg0);
}
