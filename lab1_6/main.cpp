/*
Ejercicio 6. Escriba un programa que pida dos números A y B e imprima en pantalla la potencia
B
A
, sin hacer uso de librerías matemáticas.
Ej: si se ingresan 5 y 3 se debe imprimir:
5 ∧ 3=125

*/
#include <iostream>

using namespace std;

int main()
{
    int base=0, *ptr_base = &base ;
    int potencia=0 , *ptr_potencia =& potencia;
    int resultado = 1 , *ptr_resultado = &resultado;

    cout << "Ingrese la base : ";
    cin >> *ptr_base ;
    cout << "Ingrese una potencia : ";
    cin >> *ptr_potencia ;

    for(short int iterator=0 ; iterator < *ptr_potencia ; iterator++){
        *ptr_resultado *= *ptr_base ;
    }
    cout << "la potencia de " <<*ptr_base << "^" << *ptr_potencia << " es " << *ptr_resultado<< endl;
    return 0;
}
