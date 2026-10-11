#include "m2c.h"
#include "engine.h"

void func_0202ecac(M2C_UNK);

void func_0202fc94(s32 arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) != 0) {
        func_0202ecac(0xA);
        return;
    }
    func_0202ecac(0);
}
