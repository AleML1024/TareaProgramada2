#include <gtest/gtest.h>
#include "/home/alessandro/TareaProgramada2/src/empleadoXNomina.h"

namespace
{
    TEST(TipoEmpleadoTest, TestEmpleadoXNominaCalculaMontoFinal)
    {
        /// AAA

        // Arrange - configurar el escenario
        EmpleadoXNomina *nomina = new EmpleadoXNomina(4600.98);
        // Act - ejecute la operación
        float actual = nomina->CalcularMontoFinal();
        float esperada = 4278.9114;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(actual, esperada);
    }

    TEST(TipoEmpleadoTest, TestEmpleadoXNominaCalcularImpuestosRetenidos)
    {
        /// AAA

        // Arrange - configurar el escenario
        EmpleadoXNomina *nomina = new EmpleadoXNomina(4600.98);
        // Act - ejecute la operación
        float actual = nomina->CalcularImpuestosRetenidos();
        float esperada = 322.0686;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(actual, esperada);
    }
}
