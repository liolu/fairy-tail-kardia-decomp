#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0205e008(void) {
    mov ip, #0x200000
    cmn ip, r1, lsl #0x1
    bhs L_0205e080
    cmn ip, r3, lsl #0x1
    bhs L_0205e094
L_0205e01c:
    orrs ip, r3, r1
    bmi L_0205e04c
    cmp r1, r3
    cmpeq r0, r2
    movlo r0, #0x1
    movhs r0, #0x0
    bx lr
L_0205e038:
    mov r0, #0x0
    mrs ip, cpsr
    orr ip, ip, #0x20000000
    msr cpsr_f, ip
    bx lr
L_0205e04c:
    orr ip, r0, ip, lsl #0x1
    orrs ip, ip, r2
    moveq r0, #0x0
    bne L_0205e06c
    mrs ip, cpsr
    orr ip, ip, #0x20000000
    msr cpsr_f, ip
    bxeq lr
L_0205e06c:
    cmp r3, r1
    cmpeq r2, r0
    movlo r0, #0x1
    movhs r0, #0x0
    bx lr
L_0205e080:
    bne L_0205e038
    cmp r0, #0x0
    bhi L_0205e038
    cmn ip, r3, lsl #0x1
    blo L_0205e01c
L_0205e094:
    bne L_0205e038
    cmp r2, #0x0
    bhi L_0205e038
    b L_0205e01c
}
// clang-format on
