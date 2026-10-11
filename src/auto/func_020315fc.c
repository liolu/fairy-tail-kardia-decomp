#include "m2c.h"
#include "engine.h"

void func_02056b50(M2C_UNK);

extern M2C_UNK data_02144720;

void func_020315fc(s32 arg0, s32 arg1) {
    if (arg1 != 1) {
        return;
    }
    func_02056b50(arg0);
    M2C_FIELD(&data_02144720, s32 *, 0) = 2;
    if (M2C_FIELD(&data_02144720, M2C_UNK (**)(M2C_UNK), 4) == NULL) {
        return;
    }
    M2C_FIELD(&data_02144720, M2C_UNK (**)(M2C_UNK), 4)(0);
}
