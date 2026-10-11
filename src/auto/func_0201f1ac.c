#include "m2c.h"
#include "engine.h"

void func_0200f204(void);
void func_0200f244(void);
void func_02013164(M2C_UNK);

extern s32 data_0213545c;

void func_0201f1ac(void) {
    if (data_0213545c != 0) {
        func_02013164(1);
        func_0200f244();
        func_0200f204();
    }
    data_0213545c = 0;
}
