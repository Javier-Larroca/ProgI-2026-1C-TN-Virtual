#include <iostream>
using namespace std;

/*
Dada una lista de números compuesta por grupos donde cada grupo está
separado del siguiente por un cero, y la lista de números finaliza cuando se
ingresan dos ceros consecutivos.
Se pide determinar e informar la cantidad de grupos que cuentan con una lista de números
impares que se encuentran ordenados de mayor a menor. Los números impares pueden no ser
consecutivos, pero sí deben estar ordenados.

Ejemplo 1: 3, 10, 7, 5, 11, 7, 14, 0. Este grupo NO cumple lo requerido y no debe
ser contado.
Ejemplo 2: -6, 12, 13, 8, 9, 7, 0. Este grupo SI cumple lo requerido y debe ser
contado.
*/

int main()
{
    bool banderaImparesOrdernados, banderaHuboPrimerImpar;
    int num, numImparAnt, cantGruposConImparesOrdenados=0;

    cout<<"Ingrese un numero: ";
    cin>>num;

    while(num!=0)
    {
        banderaImparesOrdernados=true;
        banderaHuboPrimerImpar=false;
        while(num!=0)
        {
            if(num%2!=0) //Preguntamos si el numero es impar.
            {
                //if(banderaHuboPrimerImpar==false)
                if(!banderaHuboPrimerImpar)
                {
                    banderaHuboPrimerImpar=true;
                    numImparAnt=num;
                }
                else
                {
                    if(num>=numImparAnt)
                    {
                        banderaImparesOrdernados=false;
                    }
                }
            }

            cout<<"Ingrese un numero: ";
            cin>>num;
        }

        //if(banderaImparesOrdernados==true)
        if(banderaImparesOrdernados)
        {
            cantGruposConImparesOrdenados++;
        }
        cout<<"==== Cantidad al momento: "<<cantGruposConImparesOrdenados<<" ===="<<endl;
        cout<<"Ingrese un numero: ";
        cin>>num;
    }

    cout<<"Hubo un total de "<<cantGruposConImparesOrdenados<<" grupos con sus impares ordenados de manera descendente"<<endl<<endl;

    return 0;
}
