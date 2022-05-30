#ifndef EMPLEADOXNOMINA_H
#define EMPLEADOXNOMINA_H

#include "tipoEmpleado.h"

class EmpleadoXNomina : public TipoEmpleado {
   
    float montoNeto; 

    public:
    EmpleadoXNomina(float montoNeto);

    float CalcularImpuestosRetenidos();

    virtual float CalcularMontoFinal();
};

#endif