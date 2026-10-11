#include "m2c.h"
#include "engine.h"

void func_02043508(M2C_UNK);

extern u16 data_0214d824;

void func_02043cbc(s32 arg0) {
    data_0214d824 |= (u16) arg0;
    func_02043508(arg0);
}
