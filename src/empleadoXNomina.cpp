#include "empleadoXNomina.h"

EmpleadoXNomina::EmpleadoXNomina(float montoNeto)
{
    this->montoNeto = montoNeto;
}

float EmpleadoXNomina::CalcularMontoFinal()
{
    float montoFinal;

    montoFinal = (montoNeto-(montoNeto/100)*7);

    return montoFinal;
}

float EmpleadoXNomina::CalcularImpuestosRetenidos()
{
    float impuestosRetenidos;

    impuestosRetenidos = (montoNeto/100)*7;

    return impuestosRetenidos;
}