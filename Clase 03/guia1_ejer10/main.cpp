#include <iostream>
using namespace std;

/*
Hacer un programa para un cajero automático para ingresar un importe a retirar
y convertir el mismo en la cantidad de billetes de $1.000, $500, $200 y $100 a
entregar.
*/
int main()
{
    //Variables a utilizar
    int importe, restante, cantMil, cantQuinientos, cantDoscientos, cantCien;

    //Ingreso de datos
    cout << "Ingrese el importe a retirar: $";
    cin>>importe; //$15.800

    //Proceso
    cantMil = importe/1000;

    //Opcion 1 - Resto
    restante = importe%1000;
    cantQuinientos = restante/500;

    /*
    //Opcion 2 - Multiplicar y restar
    cantQuinientos = (importe - (cantMil*1000)) / 500;
    */

    /*
    //Opcion 3
    importe = importe - cantMil * 1000;
    cantQuinientos = importe / 500;
    */

    restante = restante % 500;
    cantDoscientos = restante / 200;

    restante = restante % 200;
    cantCien = restante / 100;

    cout<<"La cantidad de billetes a entregar es de: "<<endl;
    cout<<"  $1000 - "<<cantMil<<endl;
    cout<<"  $500 - "<<cantQuinientos<<endl;
    cout<<"  $200 - "<<cantDoscientos<<endl;
    cout<<"  $100 - "<<cantCien<<endl;
    return 0;
}
