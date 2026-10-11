#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0208b368;

s32 func_0205a47c(s32 arg0, s32 arg1) {
    return M2C_FIELD(M2C_FIELD(&data_0208b368, void **, 8), s32 (**)(), 4)(arg0, arg1);
}
