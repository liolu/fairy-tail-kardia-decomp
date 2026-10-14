#include "engine.h"
#include "m2c.h"

void func_02015644(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_0213e380;
extern s32 data_0213e480;
extern M2C_UNK data_0213e5a0;

void func_0202b084(s32 arg0) {
    switch (data_0213e480) {                        /* irregular */
        case 0:
            return;
        case 1:
        case 2:
            func_02015644((s32) &data_0213e380, (s32) &data_0213e5a0, arg0);
            return;
    }
}
