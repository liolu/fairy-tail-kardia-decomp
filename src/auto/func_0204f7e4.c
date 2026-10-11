#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0204f51c();
extern void func_0204f52c();
extern char data_0214dd74[];
extern char data_0214dd78[];
extern char data_0214dd80[];
extern char data_0214dda4[];
// clang-format off
asm void func_0204f7e4(void) {
    stmfd sp!, {r3, lr}
    ldr r0, =data_0214dd74
    ldr r0, [r0, #0xc]
    cmp r0, #0x0
    ldmeqfd sp!, {r3, pc}
    mrs r2, cpsr
    mov r0, sp
    ldr r1, =0x9f
    msr cpsr_fsxc, r1
    mov r1, sp
    mov sp, r0
    stmfd sp!, {r1, r2}
    bl func_0204f51c
    ldr r0, =data_0214dda4
    ldr r1, =data_0214dd78
    ldr r1, [r1, #0x0]
    ldr ip, =data_0214dd80
    ldr ip, [ip, #0x0]
    ldr lr, =0x204f834
    bx ip
    bl func_0204f52c
    ldmfd sp!, {r1, r2}
    mov sp, r1
    msr cpsr_fsxc, r2
    ldmfd sp!, {r3, pc}
}
// clang-format on
