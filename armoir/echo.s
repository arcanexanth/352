.text
.global main



main:
push {lr}

mov r4, r0 //the number of arguments
mov r5, r1 //the arguments
mov r7, r4 //for the last item
sub r4, r4, #1
mov r1, #0
mov r6, #1 //iterator

b loop
//ldr r0, =nLine
//mov r1, #0
//bl printf

loop:
   ldr r0, =Line
   ldr r1, [r5, r6, lsl #2]
   bl printf

   add r6, r6, #1
   cmp r6, r4
   bne loop
   
exit:
   ldr r0, =eItem
   ldr r1, [r5, r4, lsl #2]
   bl printf
   ldr r0, =nLine
   bl printf
   pop {lr}
   mov pc, lr

Line:
   .asciz "%s "

eItem:
   .asciz "%s"

nLine:
   .asciz "\n"

/*mov r4, r1
mov r5, r0
mov r6, #1

b output

loop:
   add r6, r6, #1

   output:
      ldr r7, [r4, r6, lsl #2]
      mov r1, r7
      ldr r0, =Line
      bl printf
      mov pc, lr
      cmp r6, r5
      bne loop
pop {lr}
mov pc, lr*/
