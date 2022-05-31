#include "nodo.h"




Nodo::Nodo(int id, string nombre, string apellido, int tipoEmpleado)
{
    this->id = id;
    this-> nombre = nombre;
    this-> apellido = apellido;
    this-> tipoEmpleado = tipoEmpleado;
}

Nodo::~Nodo() 
{
    for (Nodo *empleado : this->empleados)
    {
        delete empleado;
    }
}

void Nodo::InsertarEmpleado(Nodo *empleado)
{
    this->empleados.push_back(empleado);
}

int Nodo::ObtenerID()
{
    return this->id;
}

string Nodo::ObtenerNombre()
{
    return this->nombre;
}

string Nodo::ObtenerApellido()
{
    return this->apellido;
}

int Nodo::ObtenerTipoEmpleado()
{
    return this->tipoEmpleado;
}

void Nodo::AsigneSupervisor(Nodo *supervisor)
{
   this->supervisor = supervisor; 
}

vector<Nodo *> Nodo::ObtenerEmpleados()
{
    return this->empleados;
}