#include "engine.h"
#include "m2c.h"

void func_0202bf3c(void);
void func_0202bf58(void);

extern M2C_UNK data_0213e204;

void func_0202c0a8(void) {
    M2C_FIELD(&data_0213e204, s32 *, 0xC) = 1;
    func_0202bf3c();
    func_0202bf58();
}
