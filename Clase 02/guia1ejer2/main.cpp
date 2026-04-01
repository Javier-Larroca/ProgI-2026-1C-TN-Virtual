#include <iostream>
using namespace std;

/*
Hacer un programa que solicite por teclado que se ingresen dos números y
luego guardarlos en dos variables distintas. A continuación se deben
intercambiar mutuamente los valores en ambas variables y mostrarlos por
pantalla.
Ejemplo: Suponiendo que se ingresan 3 y 8 como valores y que la variables
usadas son A y B, entonces A=3 y B=8, pero luego debe quedar A=8 y B=3.
*/

int main()
{
    //Declaración de variables
    int varUno, varDos, varAux;

    //Ingreso de los datos
    cout<<"Ingrese el numero uno: ";
    cin>>varUno;
    cout<<"Ingrese el numero dos: ";
    cin>>varDos;

    //Proceso
    varAux=varDos;
    varDos=varUno;
    varUno=varAux;

    //Mostrar la información
    cout<<"Valor variable uno: "<<varUno<<"\n"; // \n es un operador de salto de linea.
    cout<<"Valor variable dos: "<<varDos<<endl;

    return 0;
}
