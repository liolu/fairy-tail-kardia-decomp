#include "m2c.h"

M2C_UNK func_0200dca4(s32, s32, s32, M2C_UNK, s32); /* extern */
M2C_UNK func_0200f258(s32, s32, s32, s16, s32);     /* extern */

void func_0201eb74(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 var_r6;
    s32 var_r6_2;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
    switch (temp_r0) {                              /* switch 1; irregular */
        case 0:                                         /* switch 1 */
            temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x34);
            switch (temp_r0_2) {                        /* switch 2; irregular */
                case 0:                                     /* switch 2 */
                    var_r6 = 0xA8;
                    do {
                        func_0200f258(M2C_FIELD(arg0, s32 *, 0x10), var_r6, M2C_FIELD(arg0, s32 *, 0x14),
                                      (s16) M2C_FIELD(arg0, s32 *, 0x28), 0);
                        var_r6 += 1;
                    } while (var_r6 < 0xC0);
                    return;
                case 1:                                     /* switch 2 */
                    var_r6_2 = 0;
                    do {
                        func_0200f258(M2C_FIELD(arg0, s32 *, 0x10), var_r6_2, M2C_FIELD(arg0, s32 *, 0x14),
                                      (s16) M2C_FIELD(arg0, s32 *, 0x28), 0xA0);
                        var_r6_2 += 1;
                    } while (var_r6_2 < 0xC0);
                    return;
            }
            break;
        case 1:                                         /* switch 1 */
            func_0200dca4(M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, s32 *, 0x28) << 0xC, 0,
                          1);
            return;
    }
}
