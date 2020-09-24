/*
 *
Ejercicio 7. Escriba un programa que pida un número N e imprima en pantalla la suma de todos
los números entre 0 y N (incluyéndose el mismo).
Ej: si se ingresa 5: 1+2+3+4+5=15, por lo que se debe imprimir:
La sumatoria desde 0 hasta 5 es: 15

*/
#include <iostream>

using namespace std;

int main()
{
    int numero=0 , *ptr_numero = &numero ;
    cout << "Ingrese un número para hallar sumatoria : ";
    cin >> *ptr_numero ;
    cout << "Resultado : " << ((*ptr_numero*(*ptr_numero -1 ))/2)+*ptr_numero << endl ;
    return 0;
}
