#include <iostream>
#include <climits>
#include <iomanip>


#include "varios.h"
#include "funciones_vectores.h"

using namespace std;


void mostrarVector(float matriz[10][31], int tamX, int tamY)
{
    string dia="";
    cout << "  Día: ";
    for (int diaE=0; diaE<tamY; diaE++)
    {
        cout << diaE+1 << " ";
    }
    cout << endl;

    for (int i=0; i<tamX; i++)
    {
        dia=(i<9) ? "0"+to_string(i+1) : to_string(i+1);
        cout << "  Gasto " << dia << ": ";

        for (int j=0; j<tamY; j++)
        {
            if (matriz[i][j] == INT_MIN)
            {
                cout << "x ";
            }
            else
            {
                cout << fixed << setprecision(2) << matriz[i][j] << " ";
            }
        }
        cout << endl;
    }
}

void reiniciarVector(float matriz[10][31], int tamX, int tamY)
{
    for (int i=0; i<tamX; i++)
    {
        for (int j=0; j<tamY; j++)
        {
            matriz[i][j]=INT_MIN;
        }
    }
}


void cargarVector(float matriz[10][31], int tamX, int tamY)
{
    int dia=0,idCategoriaGasto=0;
    float gastoPrecio=0;
    string mensaje="";
    int realmenteCargar;

    do
    {
        mensaje ="\tIngrese un día ";
        cout << "\tIngrese 0 para salir." << endl;
        dia= pedirValor(mensaje,1,31);
        //cout << dia << endl;

        mensaje ="\tIngrese el número ID del gasto ";
        idCategoriaGasto= pedirValor(mensaje,1,10);
        //cout << idCategoriaGasto << endl;

        mensaje ="\tIngrese el precio del gasto ";

        gastoPrecio= pedirValor(mensaje, '$');
        //cout << dia << endl;
        cout << endl;
        if (dia !=0)
        {
            if (matriz[idCategoriaGasto-1][dia-1]==INT_MIN)
            {

                matriz[idCategoriaGasto-1][dia-1]=gastoPrecio;
            }
            else
            {
                matriz[idCategoriaGasto-1][dia-1]+=gastoPrecio;
            }
        }
    }
    while (dia !=0);


}
int pedirValor(std::string mensaje, int valorMin, int valorMax)
{
    int valor=0;
    do
    {
        //system("cls");
        cout << mensaje;
        if ((valorMin !=0) && (valorMax !=0))
        {
            cout << "entre " << valorMin << " y " << valorMax;
        }
        cout << ": ";
        cin >> valor;
        if (valor==0)
        {
            return 0;
        }
        if ((valor < valorMin) || (valor > valorMax))
        {
            cout << "\tError, no válido." << endl;
        }
    }
    while ((valor < valorMin) || (valor > valorMax));
    return valor;

}
float pedirValor(std::string mensaje, char moneda)
{
    float valor=0;
    do
    {
        //system("cls");
        cout << mensaje << ": " << moneda;
        cin >> valor;
    }
    while (valor < 0);
    return valor;

}

int realmenteDesea(std::string mensaje,std::string mensaje2, int rayas)
{
    int opcion=0;

    do
    {
        system("cls");
        cout << endl << "\t";
        separador(rayas);
        cout << endl << "\t\t" << mensaje << endl;
        cout << endl<< "\t\t1. " << mensaje2 << endl;
        cout << "\t\t2. Volver" << endl;
        cout << endl << "\t";
        separador(rayas);
        cout << "\t\t";
        cin >> opcion;
    }
    while ((opcion <1) || (opcion >2));
    return opcion;

}


string codigoGasto(int ejeY)
{

    switch (ejeY)
    {
    case 0:
        return "Servicios";
        break;
    case 1:
        return "Alimentación";
        break;
    case 2:
        return "Limpieza";
        break;
    case 3:
        return "Transporte";
        break;
    case 4:
        return "Educación";
        break;
    case 5:
        return "Salud";
        break;
    case 6:
        return "Ocio";
        break;
    case 7:
        return "Impuestos";
        break;
    case 8:
        return "Vestimenta";
        break;
    case 9:
        return "Inversiones";
        break;
    default:
        return "N/A";
    }
}


float sumarGastosCategoria(float matriz[10][31], int filas, int columnas, int x)
{
    float suma=0;
    for (int j=0; j<columnas; j++)
    {
        if (matriz[x][j] != INT_MIN)
        {
            suma+=matriz[x][j];
        }
    }
    return suma;
}

float sumarGastosDia(float matriz[10][31], int filas, int columnas, int y)
{
    float suma=0;
    for (int j=0; j<filas; j++)
    {
        if (matriz[j][y] != INT_MIN)
        {
            suma+=matriz[j][y];
        }
    }
    return suma;
}

float valorMayor(float vec[10],float matriz[10][31],int tamX,int tamY)
{
    float mayor=0;
    for (int i=0; i<tamX; i++)
    {
        float suma=sumarGastosCategoria(matriz,tamX, tamY,i);
        vec[i]=suma;

    }

    mayor=vec[0];
    for (int i=1; i<10; i++)
    {
        if (vec[i]>mayor)
        {
            mayor=vec[i];
        }
    }
    return mayor;

}

int devolverIndice(float vec[10],float valor)
{
    for (int i=0; i<10; i++)
    {
        if (vec[i]==valor)
        {
            return i;
        }
    }
}



void informarCategorias(float vec[10], bool criterio(float num), string mensaje)
{
    string valor="";
    int contador =0;
    for (int i=0; i<10; i++)
    {
        valor=codigoGasto(i);
        if (criterio(vec[i]))
        {
            if (mensaje ==" no")
            {
                cout << "\tLa categoria " << valor << mensaje << " tuvo gastos." << endl;
                contador++;
            }
            if (mensaje =="")
            {

                cout << "\tLa categoria " << valor << " tuvo gastos por: $ " << vec[i] << endl;
            }


        }
    }
    if (contador >0)
    {
        cout << "\tHubo " << contador << " categoría(s) sin gastos." << endl;
    }
    else if ((contador==0)&& (mensaje ==" no"))
    {
        cout << "\tNo hay categorías sin gastos." << endl;
    }
}

bool mayor(float num)
{
    return (num >0);
}
bool igual(float num)
{
    return (num ==0);
}

/*
void informarCero(float vec[10])
{
    string valor="";

    for (int i=0; i<10; i++)
    {
        if (vec[i]==0)
        {
            valor=codigoGasto(i);
            cout << "La categoria " << valor << " no tuvo gastos." << endl;
        }
        if (valor=="")
        {
            cout << "No hay categorías sin gastos." << endl;
        }
    }
}
*/
