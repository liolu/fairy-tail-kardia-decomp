#include "m2c.h"
#include "engine.h"

void func_02021aa4(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_02021ac0(M2C_UNK, M2C_UNK);

void func_02023d40(s32 arg0, s32 arg1) {
    if (func_02021ac0(arg0, arg1) != 0) {
        return;
    }
    func_02021aa4(arg0, arg1, 1);
}
