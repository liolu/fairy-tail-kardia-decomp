#include "engine.h"
#include "m2c.h"

void func_0204e9d8(M2C_UNK);
void func_0205140c(void);
void func_02051aec(void);

extern s32 data_0214df18;
extern M2C_UNK data_0214df1c;

void func_020513ac(void) {
    if (data_0214df18 != 0) {
        return;
    }
    data_0214df18 = 1;
    func_0204e9d8((s32) &data_0214df1c);
    func_0205140c();
    func_02051aec();
}
