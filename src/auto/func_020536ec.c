#include "m2c.h"
#include "engine.h"

s32 func_020536ec(void) {
    if (*(u16 *)0x04000304 & 1) {
        return 1;
    }
    return 0;
}
