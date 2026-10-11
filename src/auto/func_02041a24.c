#include "m2c.h"
#include "engine.h"

void func_02053970(void);

extern s16 data_0208b26c;
extern s16 data_0214d7e4;

void func_02041a24(void) {
    s32 temp_ip;

    temp_ip = *(s32 *)0x04000000;
    data_0208b26c = 0;
    data_0214d7e4 = (s16) ((u32) (temp_ip & 0x30000) >> 0x10);
    *(s32 *)0x04000000 = temp_ip & ~0x30000;
    func_02053970();
}
