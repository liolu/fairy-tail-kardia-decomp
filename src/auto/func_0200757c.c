#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0208cc2c;

void func_0200757c(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_0208cc2c + (arg0 * 8))) = arg1;
}
