#include "m2c.h"
#include "engine.h"

void func_0204eca8(M2C_UNK, M2C_UNK);
void func_020513e4(void);
void func_020513f8(void);

void func_02052120(s32 arg0, s32 arg1, s32 arg2) {
    func_020513e4();
    M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x3C) = arg2;
    func_0204eca8(arg0 + 0x3C + (arg1 * 4), 4);
    func_020513f8();
}
