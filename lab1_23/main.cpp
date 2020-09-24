/*
Ejercicio 23. Escriba un programa que pida dos números A y B e imprima en pantalla el mínimo
común múltiplo entre los dos.
Ej: si se ingresan 4 y 6 se debe imprimir:
El MCM de 4 y 6 es: 12
*/
#include <iostream>

using namespace std;


int main()
{
    int numero_a=0 , numero_b=0 , counter=2 , *ptr_numero_a = &numero_a , *ptr_numero_b =& numero_b ;
    cout << "Ingresa un numero A :";
    cin >> *ptr_numero_a ;
    cout << "Ingresa un numero B :";
    cin >> *ptr_numero_b ;
    bool salir = false;
    while (salir==false) {
        if((*ptr_numero_a*counter)%(*ptr_numero_b)==0){
            cout << (*ptr_numero_a)*counter <<  " es el minimo comun multiplo de "<<*ptr_numero_a << " y "<< *ptr_numero_b <<endl;
            salir=true;
        }
        else{
            counter++;
        }
    }
    return 0;
}
