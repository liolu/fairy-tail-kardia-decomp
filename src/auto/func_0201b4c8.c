#include "engine.h"
#include "m2c.h"

M2C_UNK func_02003d58(void);
void func_02003f78(M2C_UNK, M2C_UNK);
void func_02004084(M2C_UNK);
void func_020040bc(M2C_UNK);
void func_0201a384(M2C_UNK);
void func_0201a40c(void);
void func_0201a95c(void);
void func_0201ae90(void);
void func_0201b270(void);

void func_0201b4c8(void) {
    func_020040bc(0);
    func_0201a384(0xA);
    func_0201a40c();
    func_0201a95c();
    func_02004084((s32) func_0201ae90);
    func_02003f78(func_02003d58(), (s32) func_0201b270);
}
