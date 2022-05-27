FLAGS = -g -c --std=c++17

all:
	mkdir -p bin
	
	g++ $(FLAGS) src/main.cpp -o bin/main.o
	g++ $(FLAGS) src/tipoEmpleado.cpp -o bin/tipoEmpleado.o
	g++ -g -o bin/TareaProgramada2 bin/main.o
	
test:
	mkdir -p bin
	g++ $(FLAGS) tests/testTipoEmpleado.cpp -o bin/testTipoEmpleado.o
	g++ $(FLAGS) src/tipoEmpleado.cpp -o bin/tipoEmpleado.o
	g++ -g -o bin/tests bin/testTipoEmpleado.o bin/tipoEmpleado.o -lgtest -lgtest_main -lpthread 
clean:
	rm -Rf bin


