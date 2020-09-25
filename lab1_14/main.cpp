/*
Julian Guillermo Zapata Rugeles

Ejercicio 14. Escriba un programa que imprima dos columnas paralelas, una con los números del
1 al 50 y otra con los números del 50 al 1.
Ej: las primeras lineas a imprimir serían:
1 50
2 49
3 48
*/
#include <iostream>

#define MAXIMO 50
#define MINIMO 1

using namespace std;

int main()
{
    for(int i = 0 ; i < MAXIMO; i++){
        cout << (MAXIMO-i) << "    "  << (MINIMO+i) << endl;
    }
    return 0;
}
