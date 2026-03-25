#pragma once

// Llena el vector con números aleatorios entre el 1 y el 100:
void cargarVectores(int vec[], int tam);

// Muestra los vectores con valores enteros:
void mostrarVectores (const int vec[], int tam);

// Muestra los vectores de caracteres:
void mostrarVectores (const char vec[], int tam);

// Llena una cadena de caracteres:
void cargarCadena(char *palabra, int tamano);

// Ordena un vector de números enteros:
void ordenarVecEnteroSelecc(int *v, int tam);

// Ordenar vectores con callbacks
void ordenarEnteroCallBack(int vec[], int tam, bool criterio(int, int));

// Función para dictar orden creciente
bool decreciente(int n,int m);

bool creciente(int n,int m);
