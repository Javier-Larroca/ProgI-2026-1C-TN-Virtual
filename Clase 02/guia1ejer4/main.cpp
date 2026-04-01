#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar por teclado la cantidad de asientos totales en
un avión y la cantidad de pasajes ocupados y luego calcular e informar el
porcentaje de ocupación y el porcentaje de no ocupación del mismo.
Ejemplo si el avión tiene 200 asientos totales y se vendieron 80 pasajes, el
porcentaje de ocupación que se informará será de un 40% y el porcentaje de no
ocupación será de un 60%.
*/

int main()
{
    //Declaración de variables
    int cantAsientosTotales, cantAsientosOcupados;
    float porcentajeOcupacion, porcentajeDeDesocupacion;

    //Ingreso de datos
    cout<<"Ingrese la cantidad de asientos totales: ";
    cin>>cantAsientosTotales;
    cout<<"Ingrese la cantidad de asientos ocupados: ";
    cin>>cantAsientosOcupados;

    //Proceso
    //porcentajeOcupacion = (float)cantAsientosOcupados*100/cantAsientosTotales;;
    porcentajeOcupacion = cantAsientosOcupados*100.0/cantAsientosTotales;
    porcentajeDeDesocupacion = 100-porcentajeOcupacion;

    //Salida de la información
    cout<<"El porcentaje de ocupacion es de: "<<porcentajeOcupacion<<"%"<<endl;
    cout<<"El porcentaje de desocupacion es de: "<<porcentajeDeDesocupacion<<"%"<<endl<<endl;

    return 0;
}
