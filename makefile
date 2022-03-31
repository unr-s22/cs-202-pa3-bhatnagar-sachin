all: Account.o Money.o main.o
	g++ -std=c++11 -o AccountManager Account.o Money.o main.o

Account.o: Account.cpp
	g++ -std=c++11 -c Account.cpp

Money.o: Money.cpp
	g++ -std=c++11 -c Money.cpp

main.o: main.cpp
	g++ -std=c++11 -c main.cpp

clean:
	rm *.o
	rm AccountManager