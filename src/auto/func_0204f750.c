
extern void func_0204f764();
extern void func_0204f7e4();
// clang-format on

/* func_0200e114 from projets/rayman-rr/src/auto/func_0200e114.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
// clang-format off
asm void func_0204f750(void) {
    stmfd sp!, {r0, lr}
    bl func_0204f764
    bl func_0204f7e4
    ldmfd sp!, {r0, lr}
    bx lr
}
