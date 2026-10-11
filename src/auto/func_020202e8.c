#include "m2c.h"

void *func_020201d8();                              /* extern */

s8 func_020202e8(void) {
    void *temp_r0;

    temp_r0 = func_020201d8();
    if (temp_r0 == NULL) {
        return 0;
    }
    return M2C_FIELD(temp_r0, s8 *, 4);
}
