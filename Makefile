all: lab1

summer1: lab1.cpp
	g++ lab1.cpp -Wall -o lab1

clean:
	rm -f lab1