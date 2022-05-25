#ifndef ARBOL_H
#define ARBOL_H

#include "nodo.h"
#include <map>

using namespace std;

class Arbol {
    Nodo *jefe;

    map<int, Nodo *> indiceNodos;

    public:
    Arbol(int idNodoJefe, string nombreJefe, string apellidoJefe, int tipoEmpleado);
    ~Arbol();

    void InsertarEmpleado(int nuevoID, string nuevoNombre, string nuevoApellido, int idSupervisor, int tipoEmpleado);
    string ObtenerNombre(int idNodo);
    string ObtenerApellido(int idNodo);
    int ObtenerTipoEmpleado(int idNodo);

};

#endif