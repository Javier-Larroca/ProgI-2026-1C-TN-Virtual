#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar una lista de números que finaliza cuando se
ingresan dos números positivos consecutivos, y luego informar la cantidad de
ternas de números ceros ingresados consecutivamente.
Ejemplo A: 5, -10, 20, 0, 0, 0, -35, 0, 0, 0, -8, 15, 10. Se listará 2 ternas de números
ceros ingresadas consecutivamente.
*/

int main()
{
    int num, numAnt = 0, cantTernasCeros = 0, cantCerosSeguidos=0; //positivosSeguidos = 0;

    cout<<"Ingrese numero: ";
    cin>>num;
    //numAnt=num*-1;
    /*
    if(num>0)
    {
        positivosSeguidos++;
    }
    */

    while(num<=0 || numAnt<=0)
    {
        //Proceso para resolver el problema en si.
        if(num==0)
        {
            cantCerosSeguidos++;
        }
        else
        {
            cantCerosSeguidos=0;
        }

        //cout<<"CantCerosSeguidos: "<<cantCerosSeguidos<<endl;
        if(cantCerosSeguidos!= 0 && cantCerosSeguidos%3==0)
        {
            //cout<<"Sumo una terna"<<endl;
            cantTernasCeros++;
        }
        /*
        if(cantCerosSeguidos==3)
        {
            cantTernasCeros++;
            cantCerosSeguidos=0;
        }
        */
        numAnt=num;
        cout<<"Ingrese numero: ";
        cin>>num;
        /*
        if(num>0)
        {
            positivosSeguidos++;
        }
        else
        {
            positivosSeguidos=0;
        }*/
    }

    cout<<"Aparecieron "<<cantTernasCeros<<" cantidad de ternas de 0"<<endl;

    return 0;
}
