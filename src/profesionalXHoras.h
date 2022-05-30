#ifndef PROFESIONALXHORAS_H
#define PROFESIONALXHORAS_H

#include "tipoEmpleado.h"

class ProfesionalXHoras : public TipoEmpleado {

    float monto;
    float horasTrabajadas;
       
    public:
    ProfesionalXHoras(float monto, float horasTrabajadas);

    virtual float CalcularMontoFinal();
};

#endif