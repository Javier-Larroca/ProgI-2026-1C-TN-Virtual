#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar por teclado los saldos de los clientes de un
banco. Cada registro contiene los siguientes datos: - - -
Número del cliente
Número de sucursal (1, 2, 3 o 4)
Saldo del cliente
El lote finaliza cuando se ingresa un registro con número de sucursal igual a 10.
Se pide determinar e informar.
a) El número de sucursal con mayor porcentaje de clientes con saldo
superior a $ 20000.
b) El número de cliente con mayor saldo, indicando también de qué número
de sucursal es ese cliente. Se listan 2 resultados.
c) Para cada una de las sucursales la suma de los saldos de todos sus
clientes. Se listan 4 resultados.
*/

int main()
{
    int numCliente, numSucursal, cantCliente20MilSucUno=0, cantCliente20MilSucDos=0,
                                 cantCliente20MilSucTres=0, cantCliente20MilSucCuatro=0, totalCantClientes20mil, mayorNroCliente, mayorNroSuc;
    float saldo, porcSucUno, porcSucDos, porcSucTres, porcSucCuatro, mayorSaldoCliente=0;

    /*
    cout<<"Ingrese nro cliente: ";
    cin>>numCliente;
    cout<<"Ingrese nro sucursal: ";
    cin>>numSucursal;
    cout<<"Ingrese saldo: $";
    cin>>saldo;
    */

    cout<<"Ingrese nro sucursal: ";
    cin>>numSucursal;

    while(numSucursal!=10)
    {
        cout<<"Ingrese nro cliente: ";
        cin>>numCliente;
        cout<<"Ingrese saldo: $";
        cin>>saldo;
        //RESOLUCION PUNTO A
        switch(numSucursal)
        {
        case 1:
            if(saldo>20000)
            {
                cantCliente20MilSucUno++;
            }
            break;
        case 2:
            if(saldo>20000)
            {
                cantCliente20MilSucDos++;
            }
            break;
        case 3:
            if(saldo>20000)
            {
                cantCliente20MilSucTres++;
            }
            break;
        case 4:
            if(saldo>20000)
            {
                cantCliente20MilSucCuatro++;
            }
            break;
        }

        //RESOLUCION PUNTO B
        if(saldo>mayorSaldoCliente)
        {
            mayorSaldoCliente=saldo;
            mayorNroCliente=numCliente;
            mayorNroSuc=numSucursal;
        }

        /*
        cout<<"Ingrese nro cliente: ";
        cin>>numCliente;
        cout<<"Ingrese nro sucursal: ";
        cin>>numSucursal;
        cout<<"Ingrese saldo: $";
        cin>>saldo;
        */

        cout<<"Ingrese nro sucursal: ";
        cin>>numSucursal;
    }


    //RESULTADO PUNTO A
    totalCantClientes20mil=cantCliente20MilSucUno+cantCliente20MilSucDos+cantCliente20MilSucTres+cantCliente20MilSucCuatro;
    porcSucUno=cantCliente20MilSucUno*totalCantClientes20mil/100.0;
    porcSucDos=cantCliente20MilSucDos*totalCantClientes20mil/100.0;
    porcSucTres=cantCliente20MilSucTres*totalCantClientes20mil/100.0;
    porcSucCuatro=cantCliente20MilSucCuatro*totalCantClientes20mil/100.0;

    if(porcSucUno>porcSucDos && porcSucUno>porcSucTres && porcSucUno>porcSucCuatro)
    {
        cout<<"El mayor porcentaje de clientes con saldo mayor a $20000 lo tuvo la sucursal uno"<<endl;
    }
    else
    {
        if(porcSucDos>porcSucTres && porcSucDos>porcSucCuatro)
        {
            cout<<"El mayor porcentaje de clientes con saldo mayor a $20000 lo tuvo la sucursal dos"<<endl;
        }
        else
        {
            if(porcSucTres>porcSucCuatro)
            {
                cout<<"El mayor porcentaje de clientes con saldo mayor a $20000 lo tuvo la sucursal tres"<<endl;
            }
            else
            {
                cout<<"El mayor porcentaje de clientes con saldo mayor a $20000 lo tuvo la sucursal cuatro"<<endl;
            }
        }
    }

    //RESULTADO PUNTO B
    cout<<"El cliente con mayor saldo fue: "<<mayorNroCliente<<" de la sucursal: "<<mayorNroSuc<<endl;


    return 0;
}
