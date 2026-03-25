#include <iostream>
#include "funciones01.h"

using namespace std;

int main()
{
    const int tam=10;
    const int tamNombreLibro=40;

    int vec[tam]{};
    char nombreLibro[tamNombreLibro];

    cargarVectores(vec,tam);
    mostrarVectores(vec,tam);
    ordenarEnteroCallBack(vec,tam, decreciente);
    //ordenarVecEnteroSelecc(vec,tam);
    mostrarVectores(vec,tam);
    /*



    cout << "Ingrese el nombre del libro: ";
    cargarCadena(nombreLibro, tamNombreLibro);
    mostrarVectores(nombreLibro,tamNombreLibro);
    */
    return 0;
}
