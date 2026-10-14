/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02134180;

void func_02015004(s32 arg0) {
    switch (arg0) {                                 /* irregular */
        case 2:
            M2C_FIELD(&data_02134180, s32 *, 0xAC) = 1;
            return;
        case 0:
            M2C_FIELD(&data_02134180, s32 *, 0xAC) = 1;
            return;
        case 1:
            M2C_FIELD(&data_02134180, s32 *, 0xAC) = 0;
            return;
    }
}
