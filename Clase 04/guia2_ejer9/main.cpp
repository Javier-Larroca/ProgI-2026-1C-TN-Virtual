#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar por teclado las cuatro notas de los exámenes
obtenidas por un alumno y luego emitir un solo cartel de acuerdo a las
siguientes condiciones:
- “Promociona”, sí obtuvo en los cuatro exámenes nota 7 o más.
- “Rinde examen final”, si obtuvo nota 4 o más en por lo menos tres exámenes.
- “Recupera Parciales”, si obtuvo nota 4 o más en por lo menos uno de los exámenes.
- “Recursa la materia”, si no aprobó ningún examen parcial.
*/

int main()
{
    int notaUno, notaDos, notaTres, notaCuatro;
    //int contCuatros = 0; //Inicializamos nuestra variable contadora.
    int contCuatros;


    cout << "Ingrese la nota nro 1: ";
    cin>>notaUno;
    cout << "Ingrese la nota nro 2: ";
    cin>>notaDos;
    cout << "Ingrese la nota nro 3: ";
    cin>>notaTres;
    cout << "Ingrese la nota nro 4: ";
    cin>>notaCuatro;

    /*
    //Opción 1 - Condicionales anidados.
    if(notaUno>=7)
    {
        if(notaDos>=7)
        {
            if(notaTres>=7)
            {
                if(notaCuatro>=7)
                {
                    cout<<"¡PROMOCIONA!"<<endl;
                }
            }
        }
    }
    */

    //Opción 2 - Operadores logicos
    if(notaUno>=7 && notaDos>= 7 && notaTres>=7 && notaCuatro>=7)
    {
        cout<<"PROMOCIONA"<<endl;
    }
    else
    {
        contCuatros=0; //Tambien podemos inicializarla antes de utilizarla.
        if(notaUno>=4)
        {
            contCuatros=contCuatros+1; //Forma "larga" de contar
        }
        if(notaDos>=4)
        {
            contCuatros++; //Forma corta de contar
        }
        if(notaTres>=4)
        {
            contCuatros++;
        }
        if(notaCuatro>=4)
        {
            contCuatros++;
        }

        //cout<<"Cantidad de notas mayores o iguales a 4: "<<contCuatros<<endl;
        if(contCuatros>=3)
        {
            cout<<"RINDE EXAMEN FINAL"<<endl;
        }
        else
        {
            if(contCuatros>=1)
            {
                cout<<"RECUPERA PARCIALES"<<endl;
            }
            else
            {
                cout<<"RECURSA LA MATERIA"<<endl;
            }
        }
    }

    return 0;
}
