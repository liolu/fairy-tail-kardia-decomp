#include "engine.h"
#include "m2c.h"

void func_020136b4(void);
void func_02030298(M2C_UNK, M2C_UNK);

extern M2C_UNK data_021333dc;

void func_02013a38(void) {
    func_020136b4();
    func_02030298(5, (s32) &data_021333dc);
}
