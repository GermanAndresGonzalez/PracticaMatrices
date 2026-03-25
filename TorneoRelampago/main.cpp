#include <iostream>

#include "menus.h"

using namespace std;

int main()
{
    int opcion;
    opcion=seleccionMenuPrincipal();
    ejecutarOpcion(opcion);

    return 0;
}
