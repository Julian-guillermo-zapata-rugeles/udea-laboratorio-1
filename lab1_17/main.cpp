/*
Ejercicio 17. Escriba un programa que pida constantemente números hasta que se ingrese el nú-
mero cero e imprima en pantalla el mayor de todos los números ingresados.
Ej: si se ingresan 1, 2, 3, 0 se debe imprimir:
El numero mayor fue: 3
*/
#include <iostream>

using namespace std;

int main()
{
    int numero = 0 , *ptr_numero =&numero , mayor = 0 ;
    for (int i = 0; i<1; ) {
        cout << "Ingrese un numero : ";
        cin >> *ptr_numero ;
        if(*ptr_numero != 0){
            if(mayor<*ptr_numero){
                mayor=*ptr_numero;
            }
        }
        else{
            i++;
        }
    }
    cout << "El mayor numero ingresado fue " << mayor << endl;
    return 0;
}
