#include "m2c.h"

M2C_UNK func_0203e198();                            /* extern */
M2C_UNK func_0203fef4(M2C_UNK);                            /* extern */
extern s32 data_0214d7e0;

void func_02040098(M2C_UNK arg0) {
    if (data_0214d7e0 != 0) {
        return;
    }
    data_0214d7e0 = 1;
    func_0203fef4(arg0);
    func_0203e198();
}
