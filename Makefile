FLAGS = -g -c --std=c++17

all:
	mkdir -p bin
	
	g++ $(FLAGS) src/main.cpp -o bin/main.o
	g++ -g -o bin/TareaProgramada2 bin/main.o
	
test:
	mkdir -p bin
	g++ $(FLAGS) tests/testTipoEnvio.cpp -o bin/testTipoEnvio.o
	g++ $(FLAGS) src/tipoEnvio.cpp -o bin/tipoEnvio.o
	g++ -g -o bin/tests bin/testTipoEnvio.o bin/tipoEnvio.o -lgtest -lgtest_main -lpthread 
clean:
	rm -Rf bin


