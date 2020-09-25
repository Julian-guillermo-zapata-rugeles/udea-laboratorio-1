/*
Ejercicio 10. Escriba un programa que pida un número N e imprima en pantalla todos los múlti-
plos de dicho número entre 1 y 100.
Ej: si se ingresa 33 se debe imprimir:
Multiplos de 33 < menores que 100:
33
66
99
*/
#include <iostream>

using namespace std;

int main()
{
    short int number = 0 , *ptr_number = &number;
    cout << "Ingrese un numero entre 1 <= x <= 100 : " ;
    cin >> *ptr_number;
    if(*ptr_number<=0 || *ptr_number>100){
        cout << "El numero que ingresaste no cumple 1 <= x <= 100 "<< endl;
        exit(1);
    }
    for(short int i = 1 ; i <= 100 ;i ++){
        if(i % *ptr_number == 0){
            cout <<i<<" Es un multiplo "<<endl;
        }
    }
    return 0;
}

