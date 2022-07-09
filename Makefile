.default: all

PROGRAMS=gps

all: $(PROGRAMS)

clean:
	rm -rf $(PROGRAMS) *.o *.dSYM

gps: main.o GPSCoordinate.o
	g++ -Wall -Werror -std=c++14 -g -O -o $@ $^

%.o: %.cpp
	g++ -Wall -Werror -std=c++14 -g -O -c $^
