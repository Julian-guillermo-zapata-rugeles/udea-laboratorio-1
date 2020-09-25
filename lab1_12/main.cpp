/*
Julian Guillermo Zapata Rugeles

Ejercicio 12. Escriba un programa que pida un número N e imprima todas las potencias desde N
5
hasta N .
Ej: si se ingresa 3 se debe imprimir:
3 ∧ 1=3
3 ∧ 2=9
3 ∧ 3=27
3 ∧ 4=81
3 ∧ 5=243
*/
#include <iostream>

using namespace std;

int main()
{
    int numero=0 , *ptr_numero=&numero ;
    int suma=1 , *ptr_suma=&suma;
    cout << "Ingrese un numero para hallar su potencias hasta 5 : ";
    cin >> *ptr_numero;
    for(int exponente= 1 ; exponente <= 5 ; exponente ++ ){
        *ptr_suma *=*ptr_numero;
        cout << *ptr_numero <<"^"<<exponente<<" = "<<*ptr_suma<<endl;
    }
    return 0;
}
