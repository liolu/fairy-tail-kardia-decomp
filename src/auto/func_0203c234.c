#include "m2c.h"
#include "engine.h"

void func_0203c1b4(M2C_UNK, M2C_UNK);

void func_0203c234(s32 arg0) {
    func_0203c1b4(0xB7, arg0);
    *(s32 *)0x040001A4 = (*(s32 *)0x02FFFAE0 & ~0x07000000) | 0xA1000000;
}
