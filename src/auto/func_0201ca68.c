#include "m2c.h"
#include "engine.h"

void func_02003f78(M2C_UNK, M2C_UNK);
void func_02004084(M2C_UNK);
void func_020040bc(M2C_UNK);
void func_0201b5dc(M2C_UNK);
void func_0201b644(void);
void func_0201c448(void);
void func_0201c8d8(void);
void func_0201c98c(void);

void func_0201ca68(void) {
    func_020040bc(0);
    func_0201b5dc(0x100);
    func_0201b644();
    func_0201c448();
    func_02004084((s32) func_0201c8d8);
    func_02003f78(0x10, (s32) func_0201c98c);
}
