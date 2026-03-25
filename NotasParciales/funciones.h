#pragma once
#include <string>


void cargarVectorNotas(float vec[], int tam);
void mostrarVectorNotas(const float vec[], const int tam, std::string mensaje);
float pedirNota(int numAlumno,std::string mensaje);


int pedirAlumno(int tam,std::string mensaje);
void buscarAlumno(float vec[], int tam);

float sacarPromedio(const float vec[], const int tam);


float buscarCriterio(const float vec[], const int tam, float prom, bool criterio(float n, float prom));
bool menorPromedio(float n, float prom);
bool mayorPromedio(float n, float prom);


void separador(int cantRayas);


