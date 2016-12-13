.text
.global main

main:
push {lr}

ldr r0, =letter
ldr r0, [r0]
bl toupper

mov r1, r0
ldr r0, =message
bl printf

pop {lr}
mov pc, lr

tolower:
// arg0 is going to be in r0
// return value in r0
// if we alter lr, restore it before returning
orr r0, r0, #32
mov pc, lr

toupper:
mvn r1, #32
and r0, r0, r1
mov pc, lr

.data
letter:
//mov r7, #0
//ldrb r0, [r1, r7, lsl #0]
.byte 'r'

message:
.asciz "Today's class is brought to you by the letter %c!\n"
