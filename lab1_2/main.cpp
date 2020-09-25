/*
Julian Guillermo Zapata Rugeles
Ejercicio 2. Escriba un programa que pida un número N e imprima en pantalla si es par o impar.
Ej: si se ingresa 5 se debe imprimir:
5 es impar

*/
#include <iostream>

using namespace std;

int main()
{
    int numero = 0 , *ptr_numero=&numero;
    cout << "Ingrese un numero para verificar si es par o impar : " ;
    cin >> *ptr_numero;
    if(*ptr_numero%2==0){
        cout << "El numero " << *ptr_numero<< " es par " << endl;
    }
    else{
        cout << "El numero " << *ptr_numero<< " es impar " << endl;
    }
    return 0;
}
