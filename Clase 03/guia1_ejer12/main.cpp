#include <iostream>
using namespace std;

/*
Ingresar el largo, el ancho y la profundidad de una pileta rectangular y calcular
su volumen en litros y la cantidad de horas necesarias para llenarla dado un
caudal en litros/minuto que también se ingresa.
*/

int main()
{
    setlocale(LC_ALL, "spanish");
    //Declarar variables.
    float largo, ancho, profundidad, caudal, volumen, litrosTotal;
    int horas, minutos, tiempoMinutos;

    //Solicitud de ingreso de datos:
    cout<<"A continuacion ingrese la información solicitada: "<<endl;
    cout<<" -Largo (mts): ";
    cin>>largo;
    cout<<" -Ancho (mts): ";
    cin>>ancho;
    cout<<" -Profundidad (mts): ";
    cin>>profundidad;
    cout<<" -Caudal (lts x min): ";
    cin>>caudal;

    //Proceso - Calcular los metros 3 de la pileta.
    volumen = largo*ancho*profundidad;

    litrosTotal = volumen*1000;

    //tiempo = (volumen*1000)/caudal;

    tiempoMinutos = litrosTotal / caudal;

    horas = tiempoMinutos/60;
    minutos = tiempoMinutos%60;

    cout <<endl<< "El tiempo de llenado de la pileta sera de "<<horas<<":"<<minutos<<" hs " << endl;
    return 0;
}
