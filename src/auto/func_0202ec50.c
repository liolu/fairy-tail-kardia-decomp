#include "m2c.h"
#include "engine.h"

void func_0202e898(void);
void func_0202e954(void);

extern s32 data_021417f4;

void func_0202ec50(void) {
    if (data_021417f4 != 0) {
        func_0202e954();
        func_0202e898();
    }
    data_021417f4 = 0;
}
