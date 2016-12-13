.text
.global main

Lout:
   .asciz "%s "
   .asciz "\n"

main:
push {lr}

mov r4, r0 //the number of arguments
mov r5, r1 //the arguments
mov r1, #0
mov r6, #1 //iterator

b loop

loop:
   ldr r0, =Lout
   ldr r1, [r5, r6, lsl #2]
   bl printf

   add r6, r6, #1
   cmp r6, r4
   bne loop

exit:
   pop {lr}
   mov pc, lr

/*mov r4, r1
mov r5, r0
mov r6, #1

b output

loop:
   add r6, r6, #1

   output:
      ldr r7, [r4, r6, lsl #2]
      mov r1, r7
      ldr r0, =Lout
      bl printf
      mov pc, lr
      cmp r6, r5
      bne loop
pop {lr}
mov pc, lr*/
