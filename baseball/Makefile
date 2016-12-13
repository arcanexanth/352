CPP=g++
CFLAGS= -g -pedantic -std=c++11

main: main.o Baseball.o
	$(CPP) $(CFLAGS) -o $@ $^

%.o: %.cpp
	$(CPP) $(CFLAGS) -c $<

clean:
	rm -f *.o main

main.o Baseball.o: Baseball.h

