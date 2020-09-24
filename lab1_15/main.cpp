/*
Ejercicio 15. Escriba un programa que pida constantemente números hasta que se ingrese el nú-
mero cero e imprima en pantalla la suma de todos los números ingresados.
Ej: si se ingresan 1, 2, 3, 0 se debe imprimir:
El resultado de la sumatoria es: 6
*/
#include <iostream>

using namespace std;

int main()
{
    int numero=0 , suma=0, *ptr_numero=&numero ;
    for (int i = 0 ; i < 1 ; ) {
        cout << "Ingrese un numero : ";
        cin >> *ptr_numero;
        if(*ptr_numero != 0){
            suma+=*ptr_numero;
        }
        else{ i++ ;
        }
    }
    cout << "Sumatoria = "<<suma << endl;
    return 0;
}
