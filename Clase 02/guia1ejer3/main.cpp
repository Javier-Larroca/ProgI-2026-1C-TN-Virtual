#include <iostream>
using namespace std;
/*
Una concesionaria de autos paga a los vendedores un sueldo fijo de $500000
más $70000 de premio por cada auto vendido. Hacer un programa que permita
ingresar por teclado la cantidad de autos vendidos por un vendedor y luego
informar por pantalla el sueldo total a pagar.
Ejemplo. Si la cantidad de autos vendidos fuera 4 entonces el sueldo total a
pagar es de $780000.
*/

int main()
{
    //Variables a utilizar
    int cantAutosVendidos;
    float sueldoEmpleado;
    //Hacemos uso de constantes para mantener mas limpio y ordenado el codigo.
    const int SUELDO_FIJO=500000;
    const int PREMIO_POR_AUTO=75000;

    //Ingreso de datos
    cout<<"Ingrese la cantidad de autos vendidos en el mes: ";
    cin>>cantAutosVendidos;

    //Proceso
    sueldoEmpleado = SUELDO_FIJO + cantAutosVendidos * PREMIO_POR_AUTO;

    //Salida de la información
    cout<<"El sueldo del empleado es de: $"<<sueldoEmpleado;

    return 0;
}
