#include "m2c.h"

void *func_02020150();                       /* extern */

s32 func_020202c8(void) {
    void *temp_r4;

    temp_r4 = func_02020150();
    return func_02020150(-1) + M2C_FIELD(temp_r4, s32 *, 0x14);
}
