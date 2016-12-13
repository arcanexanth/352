.text
.global inbox

inbox:
   ldr r4, [sp]
   ldr r5, [sp, #4]
//   mov r0, r5
//   bx lr
   cmp r4, r0
   blt fail
   cmp r4, r2
   bgt fail
   cmp r5, r1
   blt fail
   cmp r5, r3
   bgt fail

inside:
   mov r0, #1
   b end
fail:
   mov r0, #0
end:
   bx lr

