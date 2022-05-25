#ifndef NODO_H
#define NODO_H

#include <vector>
#include <string>

using namespace std;

class Nodo {

    int id;
    string nombre;
    string apellido;
    Nodo *supervisor;
    vector<Nodo *> empleados;
    int tipoEmpleado;

    public:
    Nodo(int id, string nombre, string apellido, int tipoEmpleado);
    ~Nodo();

    void InsertarEmpleado(Nodo *empleado);
    
    int ObtenerID();
    string ObtenerNombre();
    string ObtenerApellido();
    int ObtenerTipoEmpleado();
    void AsigneSupervisor(Nodo *supervisor);
    vector<Nodo *> ObtenerEmpleados();
};

#endif