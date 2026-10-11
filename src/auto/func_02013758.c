#include "m2c.h"
#include "engine.h"

void func_020136b4(void);
void func_02030298(M2C_UNK, M2C_UNK);

extern M2C_UNK data_02132cc0;

void func_02013758(void) {
    func_020136b4();
    func_02030298(5, (s32) &data_02132cc0);
}
