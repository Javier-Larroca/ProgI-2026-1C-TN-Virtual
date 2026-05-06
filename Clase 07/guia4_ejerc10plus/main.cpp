#include <iostream>
using namespace std;

/*
Una farmacia tiene registrada la información de las ventas efectuadas
durante el mes pasado entre todas las sucursales y se solicita un programa
para obtener determinadas estadísticas.
Los datos que se disponen por cada una de las ventas efectuadas son:
 Número de sucursal (1 a 30)
 Día de la venta (1 a 31)
 Importe de la venta
 Tipo de venta (1=Particular, 2=Obra Social)
 Forma de Pago (1=Débito, 2=Crédito, 3=Contado)
Los datos están agrupados (no ordenados) por número de sucursal y puede
haber varias ventas para la misma sucursal, para el mismo día, etc. Puede haber
sucursales sin ventas durante todo el mes o durante algunos días del mes, no
habrá registros con importes iguales a 0. Al final de todo el lote se indicará con
un registro con número de sucursal igual a 0.
Se pide determinar e informar:

a) Para cada una de las sucursales el porcentaje de recaudación total por sus
ventas en crédito, débito y contado. Se informan 3 resultados por cada
sucursal.

b) Indicar en cual sucursal se hizo el menor porcentaje de recaudación total por
ventas de Tipo Obra Social. Se informa 1 resultado al final.

c) Para cada sucursal informar la primera y segunda venta individual de mayor
importe. Se informan 2 resultados por sucursal.

d)  La venta de menor importe de todas las ventas, indicando la sucursal y el día
de la venta. Se informan 3 resultados al final.
*/

int main()
{
    int nroSucursal, diaVenta, tipoVenta, formaPago, nroSucursalActual, nroSucursalMenorVentasObraSocial;
    float importeVenta, totalVentasCredito, totalVentasDebito, totalVentasContado, totalVentasSucursal,
          porcCredito, porcDebito, porcContado, totalVentasObraSocial, porcObraSocial, porcMenorObraSocial;
    bool esPrimerSucursal=true;

    cout<<"Ingrese nro sucursal: ";
    cin>>nroSucursal;

    while(nroSucursal!=0)
    {
        nroSucursalActual = nroSucursal;

        //Resolución punto A
        totalVentasCredito=0; //Reestablecemos o inicializamos en 0 por cada sucursal.
        totalVentasDebito=0;
        totalVentasContado=0;
        totalVentasSucursal=0;

        //Resolución punto B
        totalVentasObraSocial=0;

        while(nroSucursal==nroSucursalActual)
        {
            cout<<"Ingrese dia de venta: ";
            cin>>diaVenta;
            cout<<"Ingrese importe de la venta: $";
            cin>>importeVenta;
            cout<<"Ingrese tipo de venta (1 o 2): ";
            cin>>tipoVenta;
            cout<<"Ingrese forma de pago (1, 2 o 3): ";
            cin>>formaPago;

            //Resolución punto A
            switch (formaPago)
            {
            case 1:
                totalVentasCredito+=importeVenta;
                break;
            case 2:
                totalVentasDebito+=importeVenta;
                break;
            case 3:
                totalVentasContado+=importeVenta;
                break;
            default:
                cout<<"Ingreso forma de pago incorrecta."<<endl;
                break;
            }
            totalVentasSucursal+=importeVenta;

            //Resolución punto B
            if(tipoVenta==2)
            {
                totalVentasObraSocial+=importeVenta;
            }

            //Proceso de una venta

            cout<<endl;
            cout<<"Ingrese nro sucursal: ";
            cin>>nroSucursal;
        }

        //Resolución punto A
        cout<<"------------------------"<<endl;
        porcCredito=totalVentasCredito*100/totalVentasSucursal;
        porcDebito=totalVentasDebito*100/totalVentasSucursal;
        porcContado=totalVentasContado*100/totalVentasSucursal;
        cout<<"Porcentaje de monto vendido en credito: "<<porcCredito<<"%"<<endl;
        cout<<"Porcentaje de monto vendido en debito: "<<porcDebito<<"%"<<endl;
        cout<<"Porcentaje de monto vendido en contado: "<<porcContado<<"%"<<endl;
        cout<<"------------------------"<<endl;

        //Resolución punto B
        porcObraSocial=totalVentasObraSocial*100/totalVentasSucursal;
        if(esPrimerSucursal)
        {
            porcMenorObraSocial=porcObraSocial;
            nroSucursalMenorVentasObraSocial=nroSucursalActual;
            esPrimerSucursal=false;
        }
        else
        {
            if(porcObraSocial<porcMenorObraSocial)
            {
                porcMenorObraSocial=porcObraSocial;
                nroSucursalMenorVentasObraSocial=nroSucursalActual;
            }
        }
    }

    cout<<"++++++++++++++++++++++++"<<endl;
    //Resolucion punto B
    cout<<"La sucursal con menor porcentaje de ventas de tipo obra social fue: "<<nroSucursalMenorVentasObraSocial<<endl;


    return 0;
}
