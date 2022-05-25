#include "arbol.h"
#include "nodo.h"

Arbol::Arbol(int idNodoJefe, string nombreJefe, string apellidoJefe, int tipoEmpleado)
{
    // Agregar nodo raíz
    this->jefe = new Nodo(idNodoJefe,  nombreJefe, apellidoJefe,  tipoEmpleado);
    this->indiceNodos.insert( std::pair<int, Nodo *>(idNodoJefe, this->jefe) );
}

Arbol::~Arbol()
{
    delete this->jefe;
}

void Arbol::InsertarEmpleado(int nuevoID, string nuevoNombre, string nuevoApellido, int idSupervisor, int tipoEmpleado)
{
Nodo *nuevoNodo = new Nodo(nuevoID, nuevoNombre, nuevoApellido, tipoEmpleado);

    // Quién es el padre?
    Nodo *nodoJefe = this->indiceNodos.at(idSupervisor);

    nodoJefe->InsertarEmpleado(nuevoNodo);
    nuevoNodo->AsigneSupervisor(nodoJefe);

    // Agregar nuevo nodo al índice
    this->indiceNodos.insert( std::pair<int, Nodo *>(nuevoID, nuevoNodo) );
}
    


string Arbol::ObtenerNombre(int idNodo)
{
    Nodo *nodoConElValor = this->indiceNodos.at(idNodo);
    return nodoConElValor->ObtenerNombre();
}

string Arbol::ObtenerApellido(int idNodo)
{
    Nodo *nodoConElValor = this->indiceNodos.at(idNodo);
    return nodoConElValor->ObtenerApellido();
}

int Arbol::ObtenerTipoEmpleado(int idNodo)
{
    Nodo *nodoConElValor = this->indiceNodos.at(idNodo);
    return nodoConElValor->ObtenerTipoEmpleado();
}

