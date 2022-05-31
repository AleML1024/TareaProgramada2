FLAGS = -g -c --std=c++17

all:
	mkdir -p bin
	
	g++ $(FLAGS) src/main.cpp -o bin/main.o
	g++ $(FLAGS) src/empleadoXNomina.cpp -o bin/empleadoXNomina.o
	g++ $(FLAGS) src/profesionalXHoras.cpp -o bin/profesionalXHoras.o
	g++ $(FLAGS) src/nodo.cpp -o bin/nodo.o
	g++ $(FLAGS) src/arbol.cpp -o bin/arbol.o
	g++ -g -o bin/TareaProgramada2 bin/main.o bin/empleadoXNomina.o bin/profesionalXHoras.o bin/nodo.o bin/arbol.o
	
test:
	mkdir -p bin
	g++ $(FLAGS) tests/testEmpleadoXNomina.cpp -o bin/testEmpleadoXNomina.o
	g++ $(FLAGS) src/empleadoXNomina.cpp -o bin/empleadoXNomina.o
	g++ $(FLAGS) tests/testProfesionalXHoras.cpp -o bin/testProfesionalXHoras.o
	g++ $(FLAGS) src/profesionalXHoras.cpp -o bin/profesionalXHoras.o
	g++ $(FLAGS) tests/testNodo.cpp -o bin/testNodo.o
	g++ $(FLAGS) src/nodo.cpp -o bin/nodo.o
	g++ $(FLAGS) tests/testArbol.cpp -o bin/testArbol.o
	g++ $(FLAGS) src/arbol.cpp -o bin/arbol.o
	g++ -g -o bin/tests bin/testEmpleadoXNomina.o bin/empleadoXNomina.o  bin/testProfesionalXHoras.o bin/profesionalXHoras.o  bin/testNodo.o bin/nodo.o bin/testArbol.o bin/arbol.o -lgtest -lgtest_main -lpthread 

clean:
	rm -Rf bin


