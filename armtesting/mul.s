.text
.global mul

mul:
push {lr}
mov r5, r0
mov r3, #4
mul r0, r1, r3
bl malloc
   mov r7, #0
   ldr r2, [r5, r7, lsl #2]
   str r2, [r0, r7, lsl #2]
pop {lr}
mov pc, lr

/*mov r5, #5
mov r2, #0
str r5, [r4, r2, lsl #2]
bl malloc
   mov r2, #0
   mov r3, #1
   ldr r6, [r4, r2, lsl #2]
   str r6, [r0, r3, lsl #2]
   pop {lr}
   mov pc, lr

//   ldr r3, [r2, r1, lsl #2]
//   str r3, [r0, r1, lsl #2]

/*
shift:
   mov r3, #0
   ldr r2, [r0, r3, lsl #2]
   mov r0, r2
   mov pc, lr*/
