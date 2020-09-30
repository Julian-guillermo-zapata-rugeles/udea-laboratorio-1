/*
Julian Guillermo Zapata Rugeles
Ejercicio 29. Escriba un programa que adivine un número A (entre 0 y 100) seleccionado por el
usuario (el número NO se ingresa al programa), el programa imprimirá en pantalla un número B y
el usuario usará los símbolos `>', `<' y `=' para indicarle al programa si B es mayor, menor o igual
que A. El programa imprimira un nuevo número B, con base en simbolo ingresado por el usuario, y
repetira el proceso hasta acertar el número seleccionado por usuario.*/

#include <iostream>
#include <time.h>

using namespace std;

void generarNumero(int * , int , int );
int main()
{

    int minimo=0;
    int maximo=100;
    int numero = 0 ;
    char resultado='0';
    bool salir=false;

    generarNumero(&numero , minimo, maximo);
    while(salir==false){
        cout << maximo-minimo << endl;
        cout << "rango "<<minimo << " --> "<< maximo << endl;
        cout << numero << endl;
        cout << "Para adivinar tu numero ingresa > < para indicar si es mayor o menor ";
        cin >> resultado;
        if(resultado=='>'){
            minimo=numero;
            generarNumero(&numero , minimo, maximo);
        }
        else{
            maximo=numero;
            generarNumero(&numero , minimo, maximo);
        }

    }
    return 0;
}
void generarNumero(int *ptr_numero , int min , int max){
    srand(time(0));
    int tmp_numero = min + rand() % max ;
    *ptr_numero = tmp_numero;
}
