#include "engine.h"
#include "m2c.h"

void func_0204ca9c(M2C_UNK, M2C_UNK, M2C_UNK);

void func_0200c818(s32 arg0) {
    if (arg0 == 0) {
        func_0204ca9c(0xC0, 0x07000000, 0x400);
        return;
    }
    func_0204ca9c(0xC0, 0x07000400, 0x400);
}
