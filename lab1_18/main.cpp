/*
Julian Guillermo Zapata Rugeles

Ejercicio 18. Escriba un programa que pida un número N e imprima si es o no un cuadrado per-
fecto.
Ej: si se ingresa 9 se debe imprimir:
9 es un cuadrado perfecto.
y si se ingresa 8 se debe imprimir:
8 NO es un cuadrado perfecto.
*/
#include <iostream>

using namespace std;

int main()
{
    int numeroPrueba = 0 , *ptr_toNumeroPrueba = &numeroPrueba ;
    cout << "Ingrese un numero para comprobar si es cuadrado perfecto : ";
    cin >> *ptr_toNumeroPrueba ;
    return 0;
}
