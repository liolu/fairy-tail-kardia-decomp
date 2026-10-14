#include "engine.h"
#include "m2c.h"

extern u16 data_0214fdec;

s32 func_02057394(void) {
    if (data_0214fdec != 0) {
        return 0;
    }
    return 3;
}
