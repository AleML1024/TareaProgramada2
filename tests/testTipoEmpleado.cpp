#include <gtest/gtest.h>
#include "/home/alessandro/TareaProgramada2/src/tipoEmpleado.h"

namespace
{
    TEST(TipoEmpleadoTest, TestEmpleadoXNomina)
    {
        /// AAA

        // Arrange - configurar el escenario
        TipoEmpleado nomina;
        // Act - ejecute la operación
        float actual = nomina.empleadoXNomina(4600.98);
        float esperada = 4278.9114;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(actual, esperada);
    }

    TEST(TipoEmpleadoTest, TestProfesionalXHora)
    {
        /// AAA

        // Arrange - configurar el escenario
        TipoEmpleado xHora;
        // Act - ejecute la operación
        float actual = xHora.profesionalXHora(42.26, 55);
        float esperada = 2324.3;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(actual, esperada);
    }
}
