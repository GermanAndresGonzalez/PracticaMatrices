#include <iostream>
#include <ctime>

/*#include <random>
#include <chrono>
*/
#include "funciones01.h"

using namespace std;

void cargarVectores(int vec[], int tam)
{
    //unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    //std::mt19937 rng(seed);
    //int min = 1;
    //int max = 100;
    //std::uniform_int_distribution<int> dist(min, max);
    for (int i=0; i<tam; i++)
    {
        //int random_integer = dist(rng);
        int enteroAleatorio = rand() %100;
        vec[i]=enteroAleatorio;
    }
}

void mostrarVectores (const int vec[], int tam)
{
    cout << endl<< "Valores del vector:" << endl;
    for (int i=0; i<tam; i++)
    {
        cout << vec[i] << endl;
    }
}

void mostrarVectores (const char vec[], int tam)
{
    cout << endl<< "Valores del vector:" << endl;
    for (int i=0; i<tam; i++)
    {
        if (vec[i]== '\0')
        {
            break;
        }
        cout << vec[i];
    }
}


void cargarCadena(char *palabra, int tamano)
{

    int i=0;

    fflush(stdin);

    for (i=0; i<tamano; i++)
    {

        palabra[i]=cin.get();

        if (palabra[i]=='\n')
        {

            break;

        }

    }

    palabra[i]='\0';

    fflush(stdin);

}

void ordenarVecEnteroSelecc(int *v, int tam)
// Ordenamiento por selección:
{
    int i,j,posmin,aux;
    for (i=0; i<tam-1; i++)
    {

        posmin=i;
        for (j=i+1; j<tam; j++)
        {
            if (v[j]<v[posmin])
                posmin=j;

        }
        aux=v[i];
        v[i]=v[posmin];
        v[posmin]=aux;
    }
}


bool decreciente(int n,int m) {
    return n > m;
}

bool creciente(int n,int m) {
    return n < m;
}

void ordenarEnteroCallBack(int vec[],int tam, bool criterio(int, int))
//Por burbuja
{
    int aux;
    for (int i=0; i<tam; i++)
    {
        for (int j=i+1; j<tam; j++)
        {
            if (criterio(vec[j], vec[i]))
            {
                aux=vec[i];
                vec[i]=vec[j];
                vec[j]=aux;;
            }
        }

    }
}
