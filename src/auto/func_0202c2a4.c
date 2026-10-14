#include "engine.h"
#include "m2c.h"

void func_0200e024(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_0202c08c(void);

extern M2C_UNK data_0213e204;

void func_0202c2a4(s32 arg0) {
    if (M2C_FIELD(&data_0213e204, s32 *, 0xC) == 0) {
        return;
    }
    M2C_FIELD(&data_0213e204, s32 *, 0x10) = -1;
    func_0200e024(M2C_FIELD(&data_0213e204, s32 *, 0x14), M2C_FIELD(&data_0213e204, s32 *, 0x18), 0x1FF, arg0);
    func_0202c08c();
}
