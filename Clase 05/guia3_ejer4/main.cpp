#include <iostream>
using namespace std;

/*
Hacer un programa para que el usuario ingrese dos números y luego el programa
muestre por pantalla los números entre el menor y el mayor de ambos.
Ejemplo: si el usuario ingresa 3 y 15, se mostrarán los números entre el 3 y el 15
y si el usuario ingresa 25 y 8, se mostrarán los números entre el 8 y el 25.
*/

int main()
{
    int numUno, numDos, varAux; //numMax, numMin;

    cout<<"Ingrese numero uno: ";
    cin>>numUno;

    cout<<"Ingrese numero dos: ";
    cin>>numDos;

    if(numUno>numDos)
    {
        varAux=numUno;
        numUno=numDos;
        numDos=varAux;
    }

    for(int x=numUno+1; x<numDos; x++)
    {
        cout<<"Num: "<<x<<endl;
    }

    /*
    if(numUno>numDos)
    {
        numMax=numUno;
        numMin=numDos;
    }
    else
    {
        numMax=numDos;
        numMin=numUno;
    }

    for(int x=numMin+1; x<numMax; x++)
    {
        cout<<"Num: "<<x<<endl;
    }
    */

    /*
    if(numUno>numDos)
    {
        for(int x=numDos+1; x<numUno; x++)
        {
            cout<<"Num: "<<x<<endl;
        }
    }
    else
    {
        for(int x=numUno+1; x<numDos; x++)
        {
            cout<<"Num: "<<x<<endl;
        }
    }*/

    return 0;
}
