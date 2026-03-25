#include <iostream>
#include <cstdlib>
#include "menus.h"
#include "varios.h"
#include "ingresoDatos.h"

using namespace std;

void menuOpciones()
{
    const int rayas=35;
    separador(rayas);
    cout << "\t\t" << "Torneo relámpago" << endl;
    cout << "\t\t" << "1. Cargar Puntos" << endl;
    cout << "\t\t" << "2. Mostrar Tabla" << endl;
    cout << "\t\t" << "3. Reiniciar Campeonato" << endl;
    separador(rayas);

    cout << "\t\t" << "4. Salir" << endl;
    separador(rayas);
}

int seleccionMenuPrincipal()
{
    int opcion;
    system("cls");
    menuOpciones();
    cout << "\t\t";
    cin >> opcion;
    while (opcion <0 || opcion >4)
    {
        system("cls");
        menuOpciones();
        cout << "\t\t";
        cin >> opcion;
    }
    return opcion;
}

int menuCargarPuntos()
{
    const int rayas=70;
    int primerJugador;
    int segundoJugador;
    system("cls");
    separador(rayas);
    cout << "\t\tIngrese los datos de los dos jugadores que se enfrentaron" << endl;

    separador(rayas);

    cout << endl << "\t\t";
    cout << "Ingrese el número de ID del primer jugador: ";
    cin >> primerJugador;

    //separador(rayas);
    cout << endl << "\t\t";
    cout << "Ingrese el número de ID del segundo jugador: ";
    cin >> segundoJugador;
    cout << endl;
    separador(rayas);

}
void menuMostrarTabla()
{

}
void menuReiniciarCampeonato()
{
    int opcion=realmenteDesea("¿Realmente desea reiniciar?", "Reiniciar");
    if (opcion==1)
    {
        reiniciarDatos();
        exit;
    }
    if (opcion==2)
    {
        opcion=seleccionMenuPrincipal();
        ejecutarOpcion(opcion);
    }
}

int realmenteDesea(string mensaje, string mensaje2)
{
    int opcion=0;
    do
    {
        system("cls");
        cout << endl << "\t\t" << mensaje << endl;
        cout << endl<< "\t\t1. " << mensaje2 << endl;
        cout << "\t\t2. Volver" << endl;
        cin >> opcion;
    }
    while ((opcion <1) || (opcion >2));
    return opcion;

}
int menuSalir()
{
    int opcion=realmenteDesea("¿Realmente desea salir?", "Salir");
    if (opcion==1)
    {
        system("cls");
        cout << "Saliendo...";
        exit;
    }
    if (opcion==2)
    {
        opcion=seleccionMenuPrincipal();
        ejecutarOpcion(opcion);
    }

}
void ejecutarOpcion(int opcion)
{
    switch(opcion)
    {
    case 1:
        menuCargarPuntos();
        break;
    case 2:
        menuMostrarTabla();
        break;
    case 3:
        menuReiniciarCampeonato();
        break;
    case 4:
        menuSalir();
        break;
    }
}
