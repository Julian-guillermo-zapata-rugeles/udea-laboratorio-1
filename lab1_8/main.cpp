/*
Julian Guillermo Zapata Rugeles
Ejercicio 8. Escriba un programa que pida un número N e imprima en pantalla su factorial.
Ej: si se ingresa 5: 5!=1*2*3*4*5=120, por lo que se debe imprimir:
5!=120
*/
#include <iostream>

using namespace std;

void factorialset(int *);

int main()
{
    int numero=0;
    cout << "Ingrese un numero para comprobar su factorial : ";
    cin >> numero;
    factorialset(&numero);
    return 0;
}
void  factorialset(int * number){
    int suma=1 , *ptr_suma=&suma;
    if(*number < 0 ){
        cout << "Ingrese numeros mayores a 0 "<<endl;
        exit(1);
    }

    for(int indice = 1 ; indice <= *number ; indice ++ ){
        *ptr_suma *= indice;
    }
    cout << "El factorial de "<<*number<<"!"<<" es "<<*ptr_suma<<endl;
}
