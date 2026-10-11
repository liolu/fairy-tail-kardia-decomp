#include "m2c.h"
#include "engine.h"

void func_020155ac(void);

extern s32 data_0213e480;

void func_0202b13c(void) {
    switch (data_0213e480) {                        /* irregular */
    case 0:
        return;
    case 1:
    case 2:
        func_020155ac();
        return;
    }
}
