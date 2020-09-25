/*
Julian Guillermo Zapata Rugeles

Ejercicio 20. Escriba un programa que pida un número N e imprima si es o no un palíndromo
(igual de derecha a izquierda que de izquierda a derecha).
Ej: si se ingresa 121 se debe imprimir:
121 es un numero palindromo.
y si se ingresa 123 se debe imprimir:
123 NO es un numero palindromo.*/
#include <iostream>

using namespace std;

void invertirNumero(int , int * , int *  ,int *);
/*
-------------------   @longitudNumero  ---------------------------
arg1 : <int>   recibe un entero para conocer su longitud por paso valor
arg2 : <int *> puntero hacia longitud (se guadará la longitud del numero )
arg3 : <int *> puntero hacia multplicación (se guardará en 1*n ceros x valor)
arg4 : <int *> puntero en el que se almacenará el número invertido
*/


int main()
{
    int numero = 0 , longitud =0 , multplicacion = 0 , numeroInverso = 0;
    cout << "Ingrese un numero : ";
    cin >> numero;
    invertirNumero(numero , &longitud , &multplicacion , &numeroInverso);
    //cout << longitud << " - "<< multplicacion<< " - " << numeroInverso<<endl;
    if(numero==numeroInverso){
        cout <<numero<< " Es un numero palindromo : "<< endl;
    }
    else{
        cout <<numero<<" No es un numero palindromo :( "<< endl;
    }
    return 0;
}



void invertirNumero(int tmpNumero , int *pointerToLongitud , int *pointerToMultiplicar , int *reverse){
    int temp = 0 , ceros = 1 , auxiliar = tmpNumero ;
    bool salir=false;
    while(salir==false){
        if(tmpNumero < 1){
            salir=true;
        }
        else{
            tmpNumero=tmpNumero/10;
            temp++;
            if( temp >=2){
                ceros=ceros*10;
            }
        }
    }
    *pointerToLongitud=temp; // indireccion hacia logitud en <main>
    *pointerToMultiplicar=ceros;
    salir=false;

    while(salir==false){
        if(auxiliar < 1){
            salir=true;
        }
        else{
            temp=(auxiliar%10)*ceros; // se toma el ultimo numero y se multplica en potencias 10
            auxiliar=auxiliar/10;
            *reverse+=temp;
            ceros=ceros/10; // se reduce los ceros para inversión -- 1000 --> 100 --> 10
      }
    }
}

