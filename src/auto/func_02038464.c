#include "engine.h"
#include "m2c.h"

extern s32 data_0214b110;

s32 func_02038464(s32 arg0) {
    s32 temp_r2;

    temp_r2       = data_0214b110;
    data_0214b110 = arg0;
    return temp_r2;
}
