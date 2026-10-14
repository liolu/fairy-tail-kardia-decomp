#include "engine.h"
#include "m2c.h"

void func_02037244(M2C_UNK);

extern M2C_UNK data_0208cbcc;

void func_02003814(void) {
    if (M2C_FIELD(&data_0208cbcc, s32 *, 0x44) == 0) {
        return;
    }
    func_02037244(0);
}
