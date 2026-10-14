#include "m2c.h"

void func_0202205c(s32 arg0, u32 arg1, s32 arg2) {
    s32 var_r2;
    u32 var_r1;

    var_r1 = arg1;
    var_r2 = arg2;
    switch (var_r1) {
        default:
            break;
        case 0:
            var_r1 = arg0 + 0x218;
            break;
        case 1:
            var_r1 = arg0 + 0x21C;
            break;
        case 2:
            var_r1 = arg0 + 0x220;
            break;
        case 3:
            var_r1 = arg0 + 0x224;
            break;
        case 4:
            var_r1 = arg0 + 0x228;
            break;
        case 5:
            var_r1 = arg0 + 0x22C;
            break;
        case 6:
            var_r1 = arg0 + 0x230;
            break;
        case 7:
            var_r1 = arg0 + 0x234;
            break;
        case 8:
            var_r1 = arg0 + 0x238;
            break;
        case 9:
            var_r1 = arg0 + 0x23C;
            break;
        case 10:
            var_r1 = arg0 + 0x240;
            break;
        case 11:
            var_r1 = arg0 + 0x244;
            break;
        case 12:
            var_r1 = arg0 + 0x248;
            break;
        case 13:
            var_r1 = arg0 + 0x24C;
            break;
    }
    if (var_r2 < 0) {
        var_r2 = 0;
    } else if (var_r2 > 0x1869F) {
        var_r2 = 0x1869F;
    }
    *(M2C_UNK *) var_r1 = var_r2;
}
