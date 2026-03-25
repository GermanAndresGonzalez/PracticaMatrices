#include <iostream>
#include <string>

#include "varios.h"
#include "funciones_vectores.h"

using namespace std;

int main()
{
    string valorGasto="";
    const int TAMX=10, TAMY=31;
    float matrizGastos[TAMX][TAMY];
    float vec[10]={};
    float vec2[31]={};
    float valorMayorGastos=0;
    string valorCodigoGasto="";

    reiniciarVector(matrizGastos,TAMX, TAMY);

    cargarVector(matrizGastos,TAMX, TAMY);

    cout << endl;

    separador(30);

    valorMayorGastos=valorMayor(vec,matrizGastos,TAMX, TAMY);
    cout << "\tEl gasto mayor es: " << valorMayorGastos << endl;

    int indice=devolverIndice(vec,valorMayorGastos);
    valorCodigoGasto=codigoGasto(indice);
    cout << "\tY corresponde a la categoria: " << valorCodigoGasto;

    cout << endl;
    separador(30);

    cout << endl;
    informarCategorias(vec, igual, " no");
    cout << endl;
    separador(30);
    cout << endl;
    informarCategorias(vec, mayor,"");
    cout << endl;
    separador(30);
    cout << endl;
    cout << endl;

    cout << "\tLos dias en que hubo gastos son:"<< endl;
    for (int i=0;i<TAMY; i++)
    {
        float suma=sumarGastosDia(matrizGastos,TAMX, TAMY,i);
        vec2[i]=suma;
        if (suma !=0)
        {
            cout << "\tDia " << i+1 << ": $" <<suma << "." << endl;
        }
    }

    cout << endl;
    separador(30);
    cout << endl;



    mostrarVector(matrizGastos,TAMX, TAMY);





    return 0;
}
