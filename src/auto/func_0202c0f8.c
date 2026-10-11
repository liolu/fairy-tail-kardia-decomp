#include "m2c.h"
#include "engine.h"

void func_0202bfdc(void);

extern M2C_UNK data_0213e204;

void func_0202c0f8(void) {
    if (M2C_FIELD(&data_0213e204, s32 *, 0xC) == 0) {
        return;
    }
    func_0202bfdc();
}
