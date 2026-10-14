#include "engine.h"
#include "m2c.h"

M2C_UNK func_02057394(void);

s32 func_02057cdc(void) {
    if (func_02057394() != 0) {
        return 0x8000;
    }
    return (s32) * (u16 *) 0x02FFFCFA;
}
