/*
Ejercicio 11. Escriba un programa que pida un número N e imprima en pantalla su tabla de mul-
tiplicar hasta 10xN.
Ej: si se ingresa 7 se debe imprimir:
1x7=7
2x7=14
3x7=21
4x7=28
5x7=35
6x7=42
7x7=49
8x7=56
9x7=63
10x7=70

*/
#include <iostream>
#include <iomanip> // manipulación I/O
using namespace std;
void mostrarTabla(unsigned *); // puntero unsinged int

int main()
{
    unsigned int numero = 0 ;
    cout << "Ingresa un numero para mostrar su tabla : ";
    cin >> numero;
    mostrarTabla(&numero);
    return 0;
}

void mostrarTabla(unsigned *ptr_numero){
    for(unsigned int i = 1 ; i <=10 ; i++){
        cout << *ptr_numero << 'x' << i << '=' << (*ptr_numero * i) << endl;
    }
}
