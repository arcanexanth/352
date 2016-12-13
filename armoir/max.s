.text
.global max

max:
push {lr}
mov r4, r0
mov r5, r1
mov r6, #-127 //This is the beginning comparison operator
mov r7, #0

b compare

loop:
   add r7, r7, #1
   cmp r7, r5
   beq end
compare:
   ldr r2, [r4, r7, LSL #2]
   cmp r2, r6
   bgt switch
   cmp r7, r5
   beq end
   b loop
/*   cmp r7, r5
   beq end*/

switch:
   mov r6, r2
//   add r7, r7, #1
   cmp r5, r7
   bne loop
end:
   mov r0, #0
   EOR r0, r6
   bx lr
