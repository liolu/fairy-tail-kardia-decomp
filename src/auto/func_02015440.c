#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02133564;

s32 func_02015440(s32 arg0) {
    return (0xC0 * arg0) + (s32) &data_02133564;
}
