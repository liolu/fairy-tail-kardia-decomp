#include "m2c.h"

extern s32 data_0213e480;
extern M2C_UNK data_0213e5a0;

s32 func_0202af84(s32 arg0, s32 arg1) {
    s32 var_r0;

    var_r0 = arg0;
    switch (data_0213e480) {                        /* irregular */
    case 1:
    case 2:
        var_r0 = (arg1 * var_r0) + (s32) &data_0213e5a0;
        /* fallthrough */
    default:
        return var_r0;
    case 0:
        return (arg1 * var_r0) + (s32) &data_0213e5a0;
    }
}
