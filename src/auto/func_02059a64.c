#include "engine.h"
#include "m2c.h"

s32 func_02059a64(void) {
    if (*(u16 *) 0x02FFFC30 != 0xFFFF) {
        return 1;
    }
    return 0;
}
