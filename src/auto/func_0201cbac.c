/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

M2C_UNK func_0200566c(s32, s32, s32);               /* extern */
M2C_UNK func_0201cfb4(s32);                         /* extern */
M2C_UNK func_0201d4d8(s32);                         /* extern */
M2C_UNK func_0201d874(s32);                         /* extern */
extern M2C_UNK data_021353c4;

void func_0201cbac(void) {
    s32 var_r6;

    var_r6 = 0;
    do {
        *((M2C_UNK *) ((s8 *) &data_021353c4 + (var_r6 * 4))) = 0;
        func_0200566c(var_r6, 0, 0);
        func_0201cfb4(var_r6);
        func_0201d4d8(var_r6);
        func_0201d874(var_r6);
        var_r6 += 1;
    } while (var_r6 < 2);
}
