#include <gtest/gtest.h>
#include "/home/alessandro/TareaProgramada2/src/arbol.h"

namespace
{
    TEST(Arbol_Test, Test_Agregar_Jefe)
    {
        /// AAA

        // Arrange - configurar el escenario
        

        // Act - ejecute la operación
        Arbol *arbol = new Arbol(1, "Denis", "Tyler", 1);

        string nombreJefeActual = arbol->ObtenerNombre(1);
        string nombreJefeEsperado = "Denis";

        string apellidoJefeActual = arbol->ObtenerApellido(1);
        string apellidoJefeEsperado = "Tyler";


        delete arbol;

        // Assert - valide los resultados
        EXPECT_EQ(nombreJefeActual, nombreJefeEsperado);
        EXPECT_EQ(apellidoJefeActual, apellidoJefeEsperado);
    
    }

    TEST(Arbol_Test, Test_Agregar_Empleado_No_Jefe)
    {
        /// AAA

        // Arrange - configurar el escenario
       Arbol *arbol2 = new Arbol(1, "Denis", "Tyler", 1);

        // Act - ejecute la operación
        arbol2->InsertarEmpleado(3, "Harmony", "Rycroft", 1, 1);

        string nombreActual = arbol2->ObtenerNombre(3);
        string nombreEsperado = "Harmony";

        string apellidoActual = arbol2->ObtenerApellido(3);
        string apellidoEsperado = "Rycroft";

        int tipoEmpleadoActual = arbol2->ObtenerTipoEmpleado(3);
        int tipoEmpleadoEsperado = 1;


        delete arbol2;

        // Assert - valide los resultados
        EXPECT_EQ(nombreActual, nombreEsperado);
        EXPECT_EQ(apellidoActual, apellidoEsperado);
        EXPECT_EQ(tipoEmpleadoActual, tipoEmpleadoEsperado);
    }



}