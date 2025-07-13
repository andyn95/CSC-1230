CFLAGS = -std=c++11 -Wall

main:	main.o
	g++ main.o -o main $(CFLAGS)

main.o:	main.cpp
	g++ -o main.cpp -o main.o $(CFLAGS)

clean:
	rm *.o main
