#include "m2c.h"

void func_020221e4(s32 arg0, u32 arg1, s32 arg2) {
    s32 var_r2;
    u32 var_r1;

    var_r1 = arg1;
    var_r2 = arg2;
    switch (var_r1) {
    default:
        break;
    case 0:
        var_r1 = arg0 + 0x250;
        break;
    case 1:
        var_r1 = arg0 + 0x254;
        break;
    case 2:
        var_r1 = arg0 + 0x258;
        break;
    case 3:
        var_r1 = arg0 + 0x25C;
        break;
    case 4:
        var_r1 = arg0 + 0x260;
        break;
    case 5:
        var_r1 = arg0 + 0x264;
        break;
    case 6:
        var_r1 = arg0 + 0x268;
        break;
    case 7:
        var_r1 = arg0 + 0x26C;
        break;
    case 8:
        var_r1 = arg0 + 0x270;
        break;
    case 9:
        var_r1 = arg0 + 0x274;
        break;
    case 10:
        var_r1 = arg0 + 0x278;
        break;
    case 11:
        var_r1 = arg0 + 0x27C;
        break;
    }
    if (var_r2 < 0) {
        var_r2 = 0;
    } else if (var_r2 > 0x1869F) {
        var_r2 = 0x1869F;
    }
    *(M2C_UNK *)var_r1 = var_r2;
}
