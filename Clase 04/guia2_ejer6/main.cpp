#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar por teclado tres números y luego determinar e
informar con una leyenda aclaratoria si los tres son iguales entre sí, caso
contrario no emitir nada.
Tener en cuenta:  Si A es igual a B y B es igual a C, entonces A y C son iguales.
*/
int main()
{
    //Declaración de variables
    int numUno, numDos, numTres;

    //Solicitud de ingreso de datos
    cout << "Ingrese numero uno: ";
    cin>>numUno;
    cout << "Ingrese numero dos: ";
    cin>>numDos;
    cout << "Ingrese numero tres: ";
    cin>>numTres;

    /*
    //Opción uno - Identación de condicionales.
    if(numUno==numDos)
    {
        if(numDos==numTres)
        {
            cout<<"Los tres numeros son iguales"<<endl;
        }
    }
    */

    //Opción dos - Utilizando operadores lógicos.
    if(numUno==numDos && numDos == numTres)
    {
        cout<<"Los tres numeros son iguales"<<endl;
    }

    /*
    //Opción tres - Escribiendo el condicional sin llaves (Solo funciona con una sola linea)
    if(numUno==numDos && numDos == numTres)
        cout<<"Los tres numeros son iguales"<<endl;
    */

    return 0;
}
