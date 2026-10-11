#include "m2c.h"
#include "engine.h"

void func_02006e74(M2C_UNK);
void func_02007000(M2C_UNK, M2C_UNK);
void func_0201880c(M2C_UNK);
void func_02018960(M2C_UNK);
void func_02018dd0(M2C_UNK);

void func_02009324(s32 arg0, s32 arg1) {
    void *temp_r4;

    temp_r4 = M2C_FIELD((arg0 + (arg1 * 4)), void **, 0x70);
    if (!(M2C_FIELD(temp_r4, s32 *, 4) & 2)) {
        return;
    }
    func_02006e74(arg0);
    func_02007000(arg0, 1);
    func_0201880c(M2C_FIELD(temp_r4, s32 *, 0x14));
    func_02018960(M2C_FIELD(temp_r4, s32 *, 0x14));
    func_02018dd0(M2C_FIELD(temp_r4, s32 *, 0x14));
}
