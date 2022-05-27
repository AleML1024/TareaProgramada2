#include "tipoEmpleado.h"

float TipoEmpleado::empleadoXNomina(float montoNeto)
{

    float montoFinal;

    montoFinal = (montoNeto-(montoNeto/100)*7);

    return montoFinal;
}

float TipoEmpleado::profesionalXHora(float monto, float horas)
{
    float montoFinal;

    montoFinal = monto*horas;

    return montoFinal;

}