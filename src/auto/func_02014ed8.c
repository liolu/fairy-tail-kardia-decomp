#include "engine.h"
#include "m2c.h"

extern s32 data_02133180;

s32 func_02014ed8(void) {
    if (data_02133180 == 1) {
        return 1;
    }
    return 0;
}
