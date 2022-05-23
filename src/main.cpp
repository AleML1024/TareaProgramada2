#include <iostream>
#include <fstream>
#include <sstream>

#include <string>


using namespace std;

int main() {

ifstream ifs("personas.txt", std::ifstream::in); // Por default abriendo como texto

    if (!ifs.is_open())
    {
        std::cerr << "Error leyendo archivo ejemplo.txt" << std::endl;
        return -1;
    }

    std::string linea {};

    while (std::getline(ifs, linea)) {
        // Mientras el getline obtenga alguna línea,
        // procesar línea
        std::cout << "Línea: " << linea << endl;
    }

    ifs.close();
}