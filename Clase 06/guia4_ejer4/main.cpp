#include <iostream>
using namespace std;

/*
Dada una lista de números compuesta por 10 grupos y cada grupo separado del
siguiente por un cero, se pide determinar e informar:

a) Para cada uno de los grupos el máximo de los números pares y el máximo de
los números impares. Se informan 2 resultados por cada grupo.
b) Para cada uno de los grupos el porcentaje de números negativos y números
positivos. Se informan 2 resultados por cada grupo.
c) Cuántos números positivos había en total entre los 10 grupos. Se informa 1
resultado al final.
d) El número de grupo con mayor porcentaje de números impares positivos
respecto al total de números que forman el grupo. Se informa 1 resultado al f
inal.
e) Informar cuantos grupos están formados por todos números ordenados de
mayor a menor. Se informa 1 resultado al final.
*/

int main()
{
    bool hayMaxPar;//, hayMaxImpar;
    int num, maxPar, maxImpar, contPositivos=0;

    for(int x=0; x<5; x++)
    {
        hayMaxPar = false; //Reestablezco las banderas a su valor definido por cada grupo.
        //hayMaxImpar = false;
        maxImpar = 0; //En vez de usar bandera, utilizo la misma variable como variable de control.

        cout<<"Ingrese un numero: ";
        cin>>num;

        while(num!=0)
        {
            //PUNTO A
            if(num%2==0) //Numero par
            {
                /*
                if(hayMaxPar) //Pregunto si ya hubo o no algun par.
                {
                    if(num>maxPar)
                    {
                        maxPar=num;
                    }
                }
                else
                {
                    maxPar=num;
                    hayMaxPar=true;
                }*/
                if(!hayMaxPar || num>maxPar)
                {
                    maxPar=num;
                    hayMaxPar=true;
                }
            }
            else //Numero impar
            {
                /*
                if(maxImpar!=0)
                {
                    if(num>maxImpar)
                    {
                        maxImpar=num;
                    }
                }
                else
                {
                    maxImpar=num;
                    //hayMaxImpar=true;
                }*/
                if(maxImpar==0 || num>maxImpar)
                {
                    maxImpar=num;
                }
            }

            //PUNTO C
            if(num>0)
            {
                contPositivos++;
            }

            cout<<"Ingrese un numero: ";
            cin>>num;
        }

        //PUNTO A
        cout<<"El mayor par del grupo fue: "<<maxPar<<endl;
        cout<<"El mayor impar del grupo fue: "<<maxImpar<<endl;
    }
    //PUNTO C
    cout<<"La cantidad total de numeros positivos fue: "<<contPositivos<<endl<<endl;


    return 0;
}
