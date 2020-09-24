/*
Ejercicio 13. Escriba un programa que pida un número N e imprima todos los divisores de N.
Ej: si se ingresa 4 se debe imprimir:
Los divisores de n son:
1
2
4

*/
#include <iostream>
using namespace std;

void  mostrarDivisores(int *);


int main()
{
    int numero = 0;
    cout << "Ingrese un numero para mostrar su divisores : ";
    cin >> numero ;
    if(numero>0){
        mostrarDivisores(&numero);
    }else{
       cout << "Ingrese un numero mayor a cero (n>0) " << endl ;
    }

    return 0;
}

void mostrarDivisores(int *ptr_numero ){
    for(int i = 1; i <= *ptr_numero ; i ++){
        if(*ptr_numero%i==0){
            cout << i << " es un divisor de " << *ptr_numero << endl;
        }
    }
}
