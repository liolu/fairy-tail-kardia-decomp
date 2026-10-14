#include "engine.h"
#include "m2c.h"

s32 func_02021028(s32 arg0) {
    if (arg0 < 0x118) {
        return 0;
    }
    if (arg0 < 0x12C) {
        return 1;
    }
    return 2;
}
