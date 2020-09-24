/*

Ejercicio 3. Escriba un programa que pida dos números A y B e imprima en pantalla el mayor.
Ej: si se ingresan 7 y 3 se debe imprimir:
El mayor es 7

*/


#include <iostream>
using namespace std;

int main()
{
    int a =0 , b = 0;
    int *pa = &a, *pb = &b ;
    cout << "Ingrese numero A : ";
    cin >> a;
    cout << "Ingrese numero B : ";
    cin >> b;

    if(*pa > *pb ){
        cout << *pa << " es mayor que "<< *pb << endl;
    }
    else if(*pa == *pb){
        cout << "son iguales " << endl;
    }
    else{
        cout << *pa << " es menor que "<< *pb << endl;
    }
    return 0;
}
