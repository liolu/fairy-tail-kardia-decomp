#include "m2c.h"
#include "engine.h"

M2C_UNK func_0203c2c0(void);
void func_0203c388(void);
void func_0204e51c(M2C_UNK);
M2C_UNK func_0204fad0(void);

extern s32 data_0214dae0;

void func_0203c328(s32 arg0) {
    if (!(arg0 & func_0203c2c0())) {
        return;
    }
    func_0203c388();
    if (func_0203c2c0() & 0x20) {
        return;
    }
    do {
        if ((data_0214dae0 != 0) && (func_0204fad0() != 0)) {
            func_0204e51c(1);
        }
    } while (!(func_0203c2c0() & 0x20));
}
