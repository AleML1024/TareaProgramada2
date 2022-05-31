#include <gtest/gtest.h>
#include "/home/alessandro/TareaProgramada2/src/nodo.h"

namespace
{
    TEST(Nodo_Test, Test_Creacion_Nodo)
    {
        /// AAA

        // Arrange - configurar el escenario

        // Act - ejecute la operación
        Nodo *nodo = new Nodo(1, "Denis", "Tyler", 1);        

        int idActual = nodo->ObtenerID();
        int idEsperada = 1;

        string nombreActual = nodo->ObtenerNombre();
        string nombreEsperado = "Denis";
        
        string apellidoActual = nodo->ObtenerApellido();
        string apellidoEsperado = "Tyler";

        int tipoEmpleadoActual = nodo->ObtenerTipoEmpleado();
        int tipoEmpleadoEsperado = 1;

        delete nodo;

        // Assert - valide los resultados
        EXPECT_EQ(idEsperada, idActual);
        EXPECT_EQ(nombreActual, nombreEsperado);
        EXPECT_EQ(apellidoActual, apellidoEsperado);
        EXPECT_EQ(tipoEmpleadoActual, tipoEmpleadoEsperado);
    }

    TEST(Nodo_Test, Test_Agregar_Nodo_Empleado)
    {
        /// AAA

        // Arrange - configurar el escenario
        Nodo *nodoSupervisor = new Nodo(1, "Denis", "Tyler", 1);     

        // Act - ejecute la operación
        Nodo *nodoEmpleadoEsperado = new Nodo(2, "Clarissa", "Parker", 1 );   
        nodoSupervisor->InsertarEmpleado(nodoEmpleadoEsperado);

        // Assert - valide los resultados
        vector<Nodo *> empleados = nodoSupervisor->ObtenerEmpleados();
        Nodo *nodoEmpleadoActual = empleados[0];

        EXPECT_EQ(nodoEmpleadoEsperado, nodoEmpleadoActual);

        delete nodoSupervisor;
       
    }
}