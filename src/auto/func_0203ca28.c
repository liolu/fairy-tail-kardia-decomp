#include "engine.h"
#include "m2c.h"

void func_0203cab0(M2C_UNK, M2C_UNK);
void func_0204c5c0(void);
void func_02050414(void);
void func_02053038(void);

void func_0203ca28(void) {
    if (((s32) (*(u16 *) 0x02FFFFA8 & 0x8000) >> 0xF) != 0) {
        func_02053038();
    }
    func_0203cab0(1, 1);
    func_0204c5c0();
    func_02050414();
}
