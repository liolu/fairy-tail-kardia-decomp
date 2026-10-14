#include "engine.h"
#include "m2c.h"

void func_0202c08c(void);

extern M2C_UNK data_0213e204;

void func_0202c2e0(void) {
    if (M2C_FIELD(&data_0213e204, s32 *, 0xC) == 0) {
        return;
    }
    M2C_FIELD(&data_0213e204, s32 *, 0x10) = -1;
    func_0202c08c();
}
