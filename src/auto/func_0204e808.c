/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0204e808 from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/func_0204e808.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
extern int func_02050190(void);
extern void func_020501a4(int state);
extern void func_0204e344(void *queue);
extern void func_0204e394(void *queue);
extern long long func_0205e644(int a, int b);
int func_0204e808(char *q, void *msg, int flags) {
    int enabled = func_02050190();
    while (*(int *) (q + 0x14) <= *(int *) (q + 0x1c)) {
        if ((flags & 1) == 0) {
            func_020501a4(enabled);
            return 0;
        }
        func_0204e344(q);
    }
    (*(void ***) (q + 0x10))[(int) (func_0205e644(*(int *) (q + 0x18) + *(int *) (q + 0x1c), *(int *) (q + 0x14)) >> 32)] =
        msg;
    *(int *) (q + 0x1c) = *(int *) (q + 0x1c) + 1;
    func_0204e394(q + 8);
    func_020501a4(enabled);
    return 1;
}
