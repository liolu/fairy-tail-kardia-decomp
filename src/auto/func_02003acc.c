#include "engine.h"
#include "m2c.h"

extern s32 data_0208cbcc;

s32 func_02003acc(void) {
    if (data_0208cbcc != 0) {
        return 1;
    }
    return 0;
}
