#include <gtest/gtest.h>
#include "/home/alessandro/TareaProgramada2/src/profesionalXHoras.h"

namespace
{
    TEST(TipoEmpleadoTest, TestProfesionalXHora)
    {
        /// AAA

        // Arrange - configurar el escenario
        ProfesionalXHoras *xHoras = new ProfesionalXHoras(42.26, 55);
        // Act - ejecute la operación
        float actual = xHoras->CalcularMontoFinal();
        float esperada = 2324.3;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(actual, esperada);
    }
}