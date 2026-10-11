#include "m2c.h"
#include "engine.h"

void func_0202cdac(void);

extern s32 data_0213ec04;

void func_0202d07c(void) {
    if (data_0213ec04 != 0) {
        func_0202cdac();
    }
    data_0213ec04 = 0;
}
