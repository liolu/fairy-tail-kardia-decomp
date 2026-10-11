#include "m2c.h"

extern s32 data_0213e480;
extern M2C_UNK data_0213e5a0;

void *func_0202af4c(s32 arg0) {
    s32 var_r0;

    var_r0 = arg0;
    switch (data_0213e480) {                        /* irregular */
    case 1:
    case 2:
        var_r0 = (s32) ((M2C_UNK *)((s8 *)&data_0213e5a0 + (var_r0 << 5)));
        /* fallthrough */
    default:
        return (void *) var_r0;
    case 0:
        return (M2C_UNK *)((s8 *)&data_0213e5a0 + (var_r0 << 5));
    }
}
