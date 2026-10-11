#include "m2c.h"
#include "engine.h"

void func_0202fccc(M2C_UNK, M2C_UNK);
void func_020502d4(M2C_UNK);

extern M2C_UNK data_02133180;
extern M2C_UNK data_021344e0;
extern M2C_UNK data_021344e4;

void func_0201427c(void) {
    func_020502d4((s32) &data_021344e0);
    func_0202fccc((s32) &data_021344e4, 0x14);
    M2C_FIELD(&data_02133180, s32 *, 0xC) = 0;
}
