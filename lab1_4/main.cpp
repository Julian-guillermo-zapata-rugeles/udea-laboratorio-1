/*
Julian Guillermo zapata rugeles

Ejercicio 4. Escriba un programa que pida dos números A y B e imprima en pantalla el menor.
Ej: si se ingresan 7 y 3 se debe imprimir:
El menor es 3

*/
#include <iostream>

using namespace std;

int main()
{
    int numero1 = 0 , numero2 = 0, *ptr_numero=&numero1 , *ptr_numero2=&numero2;
    cout << "Ingrese un numero A : ";
    cin>> *ptr_numero ;
    cout << "Ingrese un numero B : ";
    cin >> *ptr_numero2 ;
    if(*ptr_numero < *ptr_numero2){
        cout << *ptr_numero << " es menor que " <<*ptr_numero2 << endl;
    }
    else if(*ptr_numero > *ptr_numero2){
        cout << *ptr_numero2 << " es menor que " <<*ptr_numero << endl;
    }
    else{
        cout << *ptr_numero << " es igual a " <<*ptr_numero2 << endl;
    }

    return 0;
}
