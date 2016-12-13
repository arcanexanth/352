.text
.global vecsum

/* Registers r0-r3 can be blown away when branching.
** Make sure that you move parameters inside of them onto 
** r4-r12 because they will be pushed onto the stack and then restored
*/

vecsum:
push {lr}
mov r4, r0
mov r5, r1
mov r6, r2
mov r7, #4
mul r0, r7, r6

bl malloc
   mov r7, #0
   b add
   loop1:
      str r1, [r0, r7, lsl #2]
      add r7, r7, #1
      
      add:
         ldr r1, [r4, r7, lsl #2]
         ldr r2, [r5, r7, lsl #2]
         add r1, r2
         cmp r7, r6
   bne loop1

pop {lr}
mov pc, lr

/*mov r7, #0
bl add 

mov r3, #4
mul r0, r3, r2
mov r1, r2

bl malloc
   mov r2, r1
   mov r7, #0
   b shift
   
   loop2:
      str r6, [r0, r7, lsl #2]
      add r7, r7, #1
      shift:
         ldr r6, [r4, r7, lsl #2]
         cmp r7, r2
         bne loop2
      
pop {lr}
mov pc, lr

loop1:
   str r5, [r0, r7, lsl #2]
   str r5, [r4, r7, lsl #2] 
   add r7, r7, #1
add:
   ldr r5, [r0, r7, lsl #2]
   ldr r6, [r1, r7, lsl #2]
   add r5, r6
   cmp r7, r2
   bne loop1
   mov pc, lr*/
