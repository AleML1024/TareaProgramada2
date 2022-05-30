#include "profesionalXHoras.h"

ProfesionalXHoras::ProfesionalXHoras(float monto,  float horasTrabajadas)
{
    this->monto = monto;
    this->horasTrabajadas = horasTrabajadas;
}

float ProfesionalXHoras::CalcularMontoFinal()
{
    float montoFinal;

    montoFinal = monto*horasTrabajadas;

    return montoFinal;
}