#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_021331f6;

s32 func_02015294(s32 arg0) {
    return (s32) ((M2C_UNK *)((s8 *)&data_021331f6 + (arg0 << 5)));
}
