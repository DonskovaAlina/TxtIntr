CC = g++
CFLAGS = -Wall -Wextra

all: calculator

calculator: calculator.o
	$(CC) $(CFLAGS) -o calculator calculator.o

calculator.o: calculator.cpp
	$(CC) $(CFLAGS) -c calculator.cpp

clean:
	rm -f *.o calculator
