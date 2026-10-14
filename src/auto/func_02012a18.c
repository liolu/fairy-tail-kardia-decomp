/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s32 data_020a1574;
extern M2C_UNK data_020a1590;

s32 func_02012a18(s32 arg0) {
    if (data_020a1574 == 0) {
        return 0;
    }
    return *((M2C_UNK *) ((s8 *) &data_020a1590 + (arg0 * 0xC)));
}
