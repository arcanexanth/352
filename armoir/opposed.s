.text
.global opposed

opposed:
LSR r2, r0, #31
LSR r3, r1, #31
EOR r0, r2, r3
bx lr
