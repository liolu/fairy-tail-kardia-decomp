/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0208cb24;
extern M2C_UNK data_0208ceb4;
extern M2C_UNK data_021353b0;

void func_0201ff94(void) {
    if ((s32) M2C_FIELD(&data_021353b0, s32 *, 8) < 0x3E8000) {
        M2C_FIELD(&data_021353b0, s32 *, 8) = (s32) (M2C_FIELD(&data_021353b0, s32 *, 8) + (M2C_FIELD(&data_0208cb24, s32 *, 0xC) << 0xC));
    }
    if (M2C_FIELD(&data_0208ceb4, s32 *, 4) == 0) {
        M2C_FIELD(&data_021353b0, s32 *, 8) = 0x1869F000;
    }
}
