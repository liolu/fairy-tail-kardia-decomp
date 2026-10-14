#include "engine.h"
#include "m2c.h"

void func_02021840(M2C_UNK);
void func_0202185c(M2C_UNK);
void func_020218d0(M2C_UNK, M2C_UNK);
void func_02021994(M2C_UNK);
void func_02021b70(M2C_UNK);
void func_02021e90(M2C_UNK);
void func_02021ef8(M2C_UNK);
void func_02022668(M2C_UNK);
void func_0202288c(M2C_UNK);
void func_02022a14(M2C_UNK);
void func_02022b60(M2C_UNK);

void func_02023a04(s32 arg0) {
    s32 var_r4;

    func_02021840(arg0);
    func_0202185c(arg0);
    var_r4 = 0;
    do {
        func_020218d0(arg0, var_r4);
        var_r4 += 1;
    } while (var_r4 < 3);
    func_02021994(arg0);
    func_02021b70(arg0);
    func_02021e90(arg0);
    func_02021ef8(arg0);
    func_02022668(arg0);
    func_0202288c(arg0);
    func_02022a14(arg0);
    func_02022b60(arg0);
}
