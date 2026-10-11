#include "m2c.h"
#include "engine.h"

void func_020389fc(M2C_UNK);

extern M2C_UNK data_020a135c;
extern s32 data_020a1574;

void func_0201256c(void) {
    if (data_020a1574 == 0) {
        return;
    }
    func_020389fc(M2C_FIELD(&data_020a135c, s32 *, 0x24));
}
