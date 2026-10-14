#include "engine.h"
#include "m2c.h"

void func_02032598(void);
void func_02041da4(void);

void func_020351d4(void) {
    func_02041da4();
    func_02032598();
    *(s32 *) 0x04000600 = (*(s32 *) 0x04000600 & ~0xC0000000) | 0x80000000;
}
