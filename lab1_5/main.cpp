/*
Ejercicio 5. Escriba un programa que pida dos números A y B e imprima en pantalla la división
A/B con redondeo.
Ej: si se ingresan 8 y 3 se debe imprimir:
8/3=3
Si se ingresan 7 y 3 se debe imprimir:
7/3=2
*/
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a = 0 , b = 0 , *pa = &a , *pb = &b ;
    cout << "Ingrese el valor de A : ";
    cin >> *pa;
    cout << "Ingrese el valor de B : ";
    cin >> *pb;
    cout << "Resultado : " << round( *pa / *pb ) << endl;
    return 0;
}
