#include <iostream>

#include "ingresoDatos.h"

using namespace std;

int pedirDatos(int valor, std::string mensaje)
{
    int datos=0;
    cout << "\t\t" << mensaje << valor;
    cin >> datos;
    return datos;
}
void reiniciarDatos()
{


}



