#include <iostream>
using namespace std;

/*
1. Hacer un programa para ingresar por teclado la cantidad de horas trabajadas por
un operario y el valor que se le paga por hora trabajada y listar por pantalla el
sueldo que le corresponda.
*/


int main()
{
    //Declaración de variables
    int cantHoras;
    float valorHora, sueldo;
    //float sueldo;

    //Ingreso de datos
    cout<<"Ingrese la cantidad de horas trabajadas: ";
    cin>>cantHoras;
    cout<<"Ingrese el valor de la hora: $";
    cin>>valorHora;

    //Proceso de los datos para obtener la información.
    sueldo=cantHoras*valorHora;

    //Mostrar la información.
    cout << "El sueldo final es de: $" << sueldo << endl;
    //cout << "El sueldo final es de: $" << cantHoras*valorHora << endl;

    return 0;
}
