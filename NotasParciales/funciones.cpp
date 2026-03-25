#include <iostream>
#include "funciones.h"

using namespace std;

void separador(int cantRayas)
{
    cout << endl;
    for (int i=0; i<cantRayas; i++)
    {
        cout << "-";
    }
    cout << endl;
}
void cargarVectorNotas(float vec[], int tam)
{
    for (int i=0; i<tam; i++)
    {
        vec[i]=pedirNota(i,"Ingrese la nota (0-10) del alumno ");
    }

}
void mostrarVectorNotas(const float vec[], const int tam, string mensaje)
{
    for (int i=0; i<tam; i++)
    {
        cout << mensaje <<i+1 << ": " <<vec[i] << endl;
    }
}

float pedirNota(int numAlumno,string mensaje)
{
    float nota=0.0F;
    while ((nota <= 0) or (nota >10) )
    {
        cout << mensaje << numAlumno+1 << ": ";
        cin >> nota;
    }
    return nota;

}

int pedirAlumno(int tam, std::string mensaje)
{
    int numAlumno;

    cout << mensaje << ", debe estar entre 1 y " << tam
         << " (negativo para salir): ";
    cin >> numAlumno;

    if (numAlumno < 0)
        return -1;

    while (numAlumno == 0 || numAlumno > tam)
    {
        cout << "Error. Debe estar entre 1 y " << tam
             << " (negativo para salir): ";
        cin >> numAlumno;

        if (numAlumno < 0)
            return -1;
    }

    return numAlumno - 1;
}
void buscarAlumno(float vec[], int tam)
{
    int alumno=-1;
    string mensaje ="Ingrese el alumno cuya nota quiere saber";

    cout << "Ingrese número menor a 0 para salir." << endl;
    do
    {
        alumno=pedirAlumno(tam,mensaje);
        if (alumno >=0)
        {
            cout << "El alumno " << alumno+1 << " tiene la nota: " << vec[alumno]<< endl;
        }
    }
    while (alumno>=0);
}

float sacarPromedio(const float vec[], const int tam)
{
    float promedio=0;
    for (int i=0; i<tam; i++)
    {
        promedio+=vec[i];
    }
    return promedio/tam;
}

float buscarCriterio(const float vec[], const int tam, float prom, bool criterio(float n, float prom))
{
    float valor=0;
    for (int i=0; i<tam; i++)
    {
        if (criterio(vec[i], prom))
        {
            valor++;
        }
    }

    return valor;
}

bool menorPromedio(float n, float promedio)
{
    return n < promedio;
}

bool mayorPromedio(float n, float promedio)
{
    return n > promedio;
}


/*
void cuantosPromedio(const float vec[], const int tam)
{
    float promedio=sacarPromedio(vectorNotas,CANT_ALUMNOS);
    cout << "El promedio es: " << promedio << endl;

}
*/


