#include "m2c.h"
#include "engine.h"

void func_020563cc(M2C_UNK, M2C_UNK);

void func_02056700(s32 arg0, s32 arg1) {
    if (M2C_FIELD(arg1, s32 *, 4) != 0xA) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0xA68) == 0) {
        return;
    }
    func_020563cc(arg0, arg1);
}
