#include <iostream>
using namespace std;

/*
El costo de un desarrollo de un proyecto de software se calcula en base al
lenguaje que se necesita:

Además, si el proyecto es marcado como Urgente, se le aumenta un 120 % más
al costo del proyecto.
Le solicitan un programa que permita calcular el costo total de un proyecto
basado en la cantidad de horas (int), el tipo de lenguaje (char) y si es urgente o
no (bool)
*/

int main()
{
    //Declaración de variables
    int cantHoras;
    char lenguaje, decision;
    bool urgente;
    float total;

    //Ingreso de datos
    cout<<"Ingrese la cantidad de horas: ";
    cin>>cantHoras;

    cout<<"Ingrese el lenguaje (C, #, P, G): ";
    cin>>lenguaje;

    /*
    cout<<"Indique si es urgente o no (0 o 1): ";
    cin>>urgente;
    */

    cout<<"Indique si es urgente o no (s o n): ";
    cin>>decision;
    if(decision=='s')
    {
        urgente = true;
    }
    else
    {
        urgente = false;
    }

    switch(lenguaje)
    {
    case 'C':
        total=cantHoras*7500;
        break;
    case '#':
        total=cantHoras*6100;
        break;
    case 'P':
        total=cantHoras*5400;
        break;
    case 'G':
        total=cantHoras*5000;
        break;
    default:
        cout<<"Ingreso un lenguaje incorrecto"<<endl;
        total=0;
        break;
    }

    //if(urgente==true)
    //if(urgente==1)
    if(urgente)
    {
        total=total*2.2;
    }

    cout << "El costo total fue de: $"<< total<< endl;
    return 0;
}
