/*
Julian Guillermo Zapata Rugeles
Ejercicio 16. Escriba un programa que pida constantemente números hasta que se ingrese el nú-
mero cero e imprima en pantalla el promedio de los números ingresados (excluyendo el cero).
Ej: si se ingresan 1, 2, 3, 0 se debe imprimir:
El promedio es: 2
*/
#include <iostream>

using namespace std;

int main()
{
    int numero = 0 , *ptr_numero = &numero ;
    int suma = 0 ,   *ptr_suma= & suma;
    int contador=0 , *ptr_contador=&contador;
    bool repetir = true ;
    while(repetir){
        cout << "Ingrese un numero : " ;
        cin  >> *ptr_numero;
        if(*ptr_numero != 0){
            *ptr_suma+=*ptr_numero;
            *ptr_contador += 1;
        }
        else{
            repetir=false;
        }
    }

    cout << "El promedio es "<<(*ptr_suma/ *ptr_contador)<< endl;
    return 0;
}
