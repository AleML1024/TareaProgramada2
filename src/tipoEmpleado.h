#ifndef TIPOEMPLEADO_H
#define TIPOEMPLEADO_H

class TipoEmpleado{
    
    public:

    int tipoEmpleado; //Si tipoEmpleado = 1, es trabajador por nomina. Si tipoEmpleado = 2 es profesional por horas.
    float empleadoXNomina(float montoNeto);
    float profesionalXHora(float monto, float horas);
};
#endif