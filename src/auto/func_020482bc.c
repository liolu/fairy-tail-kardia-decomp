#include "m2c.h"

void *func_020482bc(void *arg0) {
    if (!(M2C_FIELD(arg0, u8 *, 0xB) & 2)) {
        return NULL;
    }
    if (((u32) (M2C_FIELD(arg0, u8 *, 0x14) << 0x1E) >> 0x1E) != 2) {
        return NULL;
    }
    return arg0 + 0x78;
}
