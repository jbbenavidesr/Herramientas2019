OBJ=suma1.o suma2.o suma3.o

all: $(OBJ) main-sumas.x

%.o : %.cpp
	g++ -c $< -o $@

%.x : %.cpp
	g++ $^ -o $@

main-sumas.x: main-sumas.cpp $(OBJ)

PHONY: clean
clean: 
	rm -f *.o

