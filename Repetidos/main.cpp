/*
Hacer una función llamada quitarRepetidos que reciba dos vectores de enteros de 10 elementos llamados vectorSinProcesar y vectorSinRepetidos. La función debe procesar el vectorSinProcesar de manera que en el vectorSinRepetidos queden todos los elementos distintos del vectorSinProcesar. La función debe devolver la cantidad de elementos asignados a vectorSinRepetidos.

Ejemplo:
vectorUno[10] = { 1, 2, 1, 2, 5, 5, 4, 4, 3, 3 }
vectorDos[10];
int elementos = quitarRepetidos(vectorUno, vectorDos);

En elementos debe quedar el valor 5 ya que son 5 los elementos sin repetirse del vector. Además el vectorDos debe contener los valores 1, 2, 5, 4 y 3.

*/


#include <iostream>

#include "funciones.h"

using namespace std;

int main()
{
    const int NUMEROS_ENTEROS=10;
    int vectorSinProcesar[NUMEROS_ENTEROS]{};
    int vectorSinRepetidos[NUMEROS_ENTEROS]{};
    int cantidadRepetidos=0;

    cargarVectores(vectorSinProcesar, NUMEROS_ENTEROS);
    cantidadRepetidos = quitarRepetidos(vectorSinProcesar,vectorSinRepetidos);
    separador(25);
    cout << "El vector sin procesar tiene los siguientes elementos: ";
    mostrarVector(vectorSinProcesar,NUMEROS_ENTEROS);
    separador(25);
    cout << "La cantidad de números repetidos es: " << cantidadRepetidos << endl;
    cout << "Los valores repetidos son: ";

    mostrarVector(vectorSinRepetidos,NUMEROS_ENTEROS);
    separador(25);

    return 0;
}
