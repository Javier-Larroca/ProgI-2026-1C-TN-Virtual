#include <iostream>
using namespace std;

bool esPrimoOriginal(int n)
{
    int cont = 0;
    for (int x=1; x<=n; x++)
    {
        if (n%x==0)
        {
            cont++;
        }
    }
    if (cont==2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool esPrimoOriginalDos(int n)
{
    int cont = 0;
    for (int x=1; x<=n; x++)
    {
        if (n%x==0)
        {
            cont++;
        }
    }
    if (cont==2)
    {
        return true;
    }

    return false;
}

int cantDivisores(int num)
{
    int cont = 0;

    for (int x=1; x<=num; x++)
    {
        if (num%x==0)
        {
            cont++;
        }
    }

    return cont;
}

bool esPrimo(int n)
{
    return cantDivisores(n)==2;
}

int main()
{
    bool resultado;
    int numero;

    cout<<"Ingrese un numero: ";
    cin>>numero;
    /*
        resultado = esPrimo(numero);

        if(resultado)
        {
            cout<<"EL NUMERO ES PRIMO"<<endl;
        }
    */
    if(esPrimo(numero))
    {
        cout<<"EL NUMERO ES PRIMO"<<endl;
    }
    return 0;
}
