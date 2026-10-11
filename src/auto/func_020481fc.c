#include "m2c.h"
#include "engine.h"

void func_0204ca24(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_0214d84c;

void func_020481fc(s32 arg0) {
    s32 temp_r1_2;
    u16 temp_r1;

    temp_r1 = ~(1 << arg0);
    M2C_FIELD(M2C_FIELD(&data_0214d84c, void **, 0xC), u16 *, 2) = (u16) (M2C_FIELD(M2C_FIELD(&data_0214d84c, void **, 0xC), u16 *, 2) & temp_r1);
    temp_r1_2 = arg0 * 0x590;
    M2C_FIELD(M2C_FIELD(&data_0214d84c, void **, 0xC), u16 *, 4) = (u16) (M2C_FIELD(M2C_FIELD(&data_0214d84c, void **, 0xC), u16 *, 4) & temp_r1);
    M2C_FIELD((M2C_FIELD(&data_0214d84c, void **, 0xC) + temp_r1_2), s32 *, 0x590) = 0;
    M2C_FIELD((M2C_FIELD(&data_0214d84c, void **, 0xC) + temp_r1_2), s32 *, 0x594) = 0;
    M2C_FIELD((M2C_FIELD(&data_0214d84c, void **, 0xC) + temp_r1_2), s16 *, 0x598) = 0;
    M2C_FIELD((M2C_FIELD(&data_0214d84c, void **, 0xC) + temp_r1_2), s16 *, 0x59C) = 0;
    func_0204ca24(0, (s32) (M2C_FIELD(&data_0214d84c, void **, 0xC) + 0x10 + temp_r1_2), 0x4C0);
}
