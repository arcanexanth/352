.text
.global pack, red, green, blue

pack:
   mov r3, #0
   lsl r0, #16
   lsl r1, #8
   ORR r3, r0
   ORR r3, r1
   ORR r3, r2
   mov r0, r3
   b end
red:  
   lsr r0, #16
   b end
green:
   lsl r0, #16
   lsr r0, #24
   b end
blue:
   lsl r0, #24
   lsr r0, #24
   b end
end:
   bx lr
