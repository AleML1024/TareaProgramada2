FLAGS = -g -c --std=c++17

all:
	mkdir -p bin
	
	g++ $(FLAGS) src/main.cpp -o bin/main.o
	g++ $(FLAGS) src/empleadoXNomina.cpp -o bin/empleadoXNomina.o
	g++ $(FLAGS) src/profesionalXHoras.cpp -o bin/profesionalXHoras.o
	g++ -g -o bin/TareaProgramada2 bin/main.o bin/empleadoXNomina.o bin/profesionalXHoras.o 
	
test:
	mkdir -p bin
	g++ $(FLAGS) tests/testEmpleadoXNomina.cpp -o bin/testEmpleadoXNomina.o
	g++ $(FLAGS) src/empleadoXNomina.cpp -o bin/empleadoXNomina.o
	g++ $(FLAGS) tests/testProfesionalXHoras.cpp -o bin/testProfesionalXHoras.o
	g++ $(FLAGS) src/profesionalXHoras.cpp -o bin/profesionalXHoras.o
	g++ -g -o bin/tests bin/testEmpleadoXNomina.o bin/empleadoXNomina.o  bin/testProfesionalXHoras.o bin/profesionalXHoras.o -lgtest -lgtest_main -lpthread 
clean:
	rm -Rf bin


