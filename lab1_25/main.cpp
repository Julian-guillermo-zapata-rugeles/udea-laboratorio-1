/*
Ejercicio 25. Escriba un programa que pida un número N e imprima en pantalla la cantidad de
dígitos de N.
Ej: si se ingresa 1234 se debe imprimir:
1234 tiene 4 digitos.
*/
#include <iostream>

using namespace std;

int main()
{
    int numero = 0 , contador = 0 ,*ptr_numero=&numero, *ptr_contador=&contador;
    bool salir=false;
    cout << "Ingrese un numero para calcular su longitud : ";
    cin >> *ptr_numero;
    while (salir==false) {
        if(*ptr_numero<1){
            salir=true;
        }
        else{
            contador++;
            *ptr_numero=(*ptr_numero)/10;
        }
    }
    cout << *ptr_contador << endl;
    return 0;
}
