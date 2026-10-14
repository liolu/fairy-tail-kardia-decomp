#include "m2c.h"

extern M2C_UNK data_0213f334;

s32 func_02028934(s32 arg0) {
    s32 var_r0;

    var_r0 = arg0;
    switch (M2C_FIELD(&data_0213f334, s32 *, 0x88)) { /* switch 1; irregular */
        default:                                        /* switch 1 */
            return var_r0;
        case 0:                                         /* switch 1 */
            switch (M2C_FIELD(&data_0213f334, s32 *, 0x8C)) { /* switch 2; irregular */
                case 2:                                     /* switch 2 */
                    var_r0 = 2;
            /* fallthrough */
                default:                                    /* switch 2 */
                    return var_r0;
                case 0:                                     /* switch 2 */
                    return 0;
                case 1:                                     /* switch 2 */
                    return 1;
            }
            break;
        case 1:                                         /* switch 1 */
            return 3;
        case 2:                                         /* switch 1 */
            if (M2C_FIELD(&data_0213f334, s32 *, 0x90) != 0) {
                if (M2C_FIELD(&data_0213f334, s32 *, 0x90) == 1) {
                    var_r0 = 5;
                }
                return var_r0;
            }
            return 4;
    }
}
