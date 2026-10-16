#include "engine.h"
#include "m2c.h"

s32 func_02052e4c(M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_020536ec(void);

s32 func_02053074(s32 arg0) {
    if (func_020536ec() == 0) {
        return 0;
    }
    return func_02052e4c(0x10, (s32) (u16) arg0, 0);
}
