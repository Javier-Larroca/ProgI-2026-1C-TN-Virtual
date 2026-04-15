#include <iostream>
using namespace std;

/*
Hacer un programa en el que se ingrese la edad y altura de 5 personas. Luego,
calcular e informar:

La cantidad de personas mayores a 30 años que midan más de 1.8 metros.
El promedio de altura de las personas mayores a 30 años.
La cantidad de personas con altura entre 1.7 y 1.8 (ambos inclusive)
La cantidad de personas cuya edad sea de 20, 30 o 40 años.
*/

int main()
{
    int edadUno, edadDos, edadTres, edadCuatro, edadCinco;
    int cantPersonasMayor30Mas180 = 0, contMayor30 = 0;
    float alturaUno, alturaDos, alturaTres, alturaCuatro, alturaCinco;
    float acumMayor30 = 0, promMayor30;

    cout<<"Ingrese la edad 1: ";
    cin>>edadUno;
    cout<<"Ingrese la altura 1: ";
    cin>>alturaUno;
    cout<<"Ingrese la edad 2: ";
    cin>>edadDos;
    cout<<"Ingrese la altura 2: ";
    cin>>alturaDos;
    cout<<"Ingrese la edad 3: ";
    cin>>edadTres;
    cout<<"Ingrese la altura 3: ";
    cin>>alturaTres;
    cout<<"Ingrese la edad 4: ";
    cin>>edadCuatro;
    cout<<"Ingrese la altura 4: ";
    cin>>alturaCuatro;
    cout<<"Ingrese la edad 5: ";
    cin>>edadCinco;
    cout<<"Ingrese la altura 5: ";
    cin>>alturaCinco;

    /*
    if(edadUno>30 && alturaUno>1.8)
    {
        cantPersonasMayor30Mas180++;
    }
    if(edadDos>30 && alturaDos>1.8)
    {
        cantPersonasMayor30Mas180++;
    }
    if(edadTres>30 && alturaTres>1.8)
    {
        cantPersonasMayor30Mas180++;
    }
    if(edadCuatro>30 && alturaCuatro>1.8)
    {
        cantPersonasMayor30Mas180++;
    }
    if(edadCinco>30 && alturaCinco>1.8)
    {
        cantPersonasMayor30Mas180++;
    }

    if(edadUno>30)
    {
        acumMayor30+=alturaUno;
        contMayor30++;
    }
    if(edadDos>30)
    {
        acumMayor30+=alturaDos;
        contMayor30++;
    }
    if(edadTres>30)
    {
        acumMayor30+=alturaTres;
        contMayor30++;
    }
    if(edadCuatro>30)
    {
        acumMayor30+=alturaCuatro;
        contMayor30++;
    }
    if(edadCinco>30)
    {
        acumMayor30+=alturaCinco;
        contMayor30++;
    }

    cout<<"La cantidad de personas que son mayores a 30 y miden mas de 1.80 son: "<<cantPersonasMayor30Mas180<<endl;

    if(contMayor30>0)
    {
        promMayor30= acumMayor30/contMayor30;
        cout<<"El promedio de altura de los mayores de 30 es: "<<promMayor30<<endl;
    }
    else
    {
        cout<<"No hubo personas mayores a 30 años."<<endl;
    }
    */

    //Pregunta general que me sirve para punto 1 y 2
    if(edadUno>30)
    {
        //Pregunta especifica para el punto 1.
        if(alturaUno>1.8)
        {
            cantPersonasMayor30Mas180++;
        }
        acumMayor30=acumMayor30+alturaUno;
        contMayor30++;
    }
    if(edadDos>30)
    {
        acumMayor30+=alturaDos;
        contMayor30++;
        if( alturaDos>1.8)
        {
            cantPersonasMayor30Mas180++;
        }
    }
    if(edadTres>30)
    {
        acumMayor30+=alturaTres;
        contMayor30++;
        if(alturaTres>1.8)
        {
            cantPersonasMayor30Mas180++;
        }
    }
    if(edadCuatro>30)
    {
        acumMayor30+=alturaCuatro;
        contMayor30++;
        if(alturaCuatro>1.8)
        {
            cantPersonasMayor30Mas180++;
        }
    }
    if(edadCinco>30)
    {
        acumMayor30+=alturaCinco;
        contMayor30++;
        if(alturaCinco>1.8)
        {
            cantPersonasMayor30Mas180++;
        }
    }

    cout<<"La cantidad de personas que son mayores a 30 y miden mas de 1.80 son: "<<cantPersonasMayor30Mas180<<endl;

    if(contMayor30>0)
    {
        promMayor30= acumMayor30/contMayor30;
        cout<<"El promedio de altura de los mayores de 30 es: "<<promMayor30<<endl;
    }
    else
    {
        cout<<"No hubo personas mayores a 30 años."<<endl;
    }

    return 0;
}
