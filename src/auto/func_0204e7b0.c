#include "m2c.h"
#include "engine.h"

M2C_UNK func_02050248(void);

extern M2C_UNK data_02063910;

s32 func_0204e7b0(void) {
    return *((M2C_UNK *)((s8 *)&data_02063910 + (func_02050248() * 4)));
}
