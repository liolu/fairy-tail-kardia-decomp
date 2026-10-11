#include "m2c.h"

extern M2C_UNK data_02141820;

u16 func_02030588(void) {
    return M2C_FIELD(&data_02141820, u16 *, 0xA);
}
