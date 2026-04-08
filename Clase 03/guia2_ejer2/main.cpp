#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar por teclado un número y luego informar por
pantalla con un cartel aclaratorio si el mismo es par o impar.
*/

int main()
{
    int numero;

    cout << "Ingrese un numero: ";
    cin>> numero;

    /*
    //resto = numero%2
    //if( resto==0 )
    if(numero%2==0)
    {
        cout<<"El numero es PAR."<<endl;
    }
    else
    {
        cout << "El numero es IMPAR." << endl;
    }
    */

    if(numero%2!=0)
    {
        cout << "El numero es IMPAR." << endl;
    }
    else
    {
        cout<<"El numero es PAR."<<endl;
    }

    return 0;
}
