#pragma once

void mostrarVector(float matriz[10][31], int tamX, int tamY);
void reiniciarVector(float matriz[10][31], int tamX, int tamY);
void cargarVector(float matriz[10][31], int tamX, int tamY);

int pedirValor(std::string mensaje="Ingrese un valor", int valorMin=0, int valorMax=0);
float pedirValor(std::string mensaje, char moneda);

void informarCategorias(float vec[10], bool criterio(float num),std::string mensaje="");
bool mayor(float num);
bool igual(float num);

//void informarCero(float vec[10]);


float sumarGastosCategoria(float matriz[10][31], int filas, int columnas, int x);
float sumarGastosDia(float matriz[10][31], int filas, int columnas, int y);

float valorMayor(float vec[10],float matriz[10][31],int tamX, int tamY);

int devolverIndice(float vec[10],float valor);
void sinMovimiento(float matriz[10][31], int tamX, int tamY);


int realmenteDesea(std::string mensaje,std::string mensaje2, int rayas);

std::string codigoGasto(int ejeY);

