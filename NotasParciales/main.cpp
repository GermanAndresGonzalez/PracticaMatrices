/*
Cargar las notas del primer parcial de los 78 estudiantes de un curso. Luego de cargar todas las notas:

- Pedir un número y mostrar por pantalla la nota registrada. Por ejemplo, se ingresa 10 para mostrar el décimo examen.

- Listar cuántos estudiantes obtuvieron una nota mayor al promedio.

*/








#include <iostream>
#include <string>
#include "funciones.h"


using namespace std;

int main()
{
    const int CANT_ALUMNOS=10;
    float vectorNotas[CANT_ALUMNOS];
    float promedio=0,menoresPromedio=0,mayoresPromedio=0;


    cargarVectorNotas(vectorNotas, CANT_ALUMNOS);
    separador(25);

    mostrarVectorNotas(vectorNotas, CANT_ALUMNOS,"Nota del alumno ");
    separador(25);

    promedio=sacarPromedio(vectorNotas,CANT_ALUMNOS);
    cout << "El promedio es: " << promedio << endl;
    separador(25);
    menoresPromedio=buscarCriterio(vectorNotas, CANT_ALUMNOS, promedio, menorPromedio);
    cout << "La cantidad de alumnos cuyas notas es menor al promedio es: " << menoresPromedio << endl;
    mayoresPromedio=buscarCriterio(vectorNotas, CANT_ALUMNOS, promedio, mayorPromedio);
    cout << "La cantidad de alumnos cuyas notas es mayor al promedio es: " << mayoresPromedio << endl;

    /*
    buscarAlumno(vectorNotas, CANT_ALUMNOS);
    */


    separador(25);


    return 0;
}
