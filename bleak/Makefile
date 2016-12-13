CPP=g++
CFLAGS=	-g -pedantic -std=c++11

main: main.o BleakVirtualMachine.o
	$(CPP) $(CFLAGS) -o $@ $^

%.o: %.cpp Makefile
	$(CPP) $(CFLAGS) -c -o $@ $<

%.o: %.cpp %.h Makefile
	$(CPP) $(CFLAGS) -c -o $@ $<

clean:
	rm -f *.o main

main.o BleakVirtualMachine.o: BleakVirtualMachine.h

