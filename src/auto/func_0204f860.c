#include "m2c.h"
#include "engine.h"

extern u16 data_0214de14;

void func_0204f860(s32 arg0) {
    data_0214de14 |= (u16) (1 << arg0);
}
