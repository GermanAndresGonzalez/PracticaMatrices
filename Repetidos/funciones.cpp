#include <iostream>

#include "funciones.h"

using namespace std;

int quitarRepetidos(int vectorSinProcesar[], int vectorSinRepetidos[])
{
    int contador=0;
    for (int i=0;i<10;i++)
    {
        for (int j=i+1;j<10;j++)
        {
            if (vectorSinProcesar[i] == vectorSinProcesar[j])
            {
                contador++;
                vectorSinRepetidos[i]=vectorSinProcesar[i];
            }

        }
    }
    return contador;

}
void cargarVectores(int vec[], int tam)
{
    int valor=0;
    for (int i=0; i<tam; i++)
    {
        cout << "Ingrese un valor entero: ";
        cin >> valor;
        vec[i]=valor;
    }
}

void mostrarVector(int vec[], int tam)
{
    for (int i=0; i<tam; i++)
    {

        cout << vec[i] << "  ";
    }
}


void separador(int cantRayas)
{
    cout << endl<< endl;
    for (int i=0; i<cantRayas; i++)
    {
        cout << "-";
    }
    cout << endl<< endl;
}
