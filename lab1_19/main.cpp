/*
Ejercicio 19. Escriba un programa que pida un número N e imprima si es o no un número primo.
Ej: si se ingresa 7 se debe imprimir:
7 es un numero primo.
y si se ingresa 8 se debe imprimir:
8 NO es un numero primo.
*/
#include <iostream>

using namespace std;
void searchForDivisor(const long long  int *);
int main()
{
    long long int testNumero=0 ;
    cout << "Ingrese un numero para verificar si es primo : " ;
    cin >>testNumero;
    if(testNumero>0){
        searchForDivisor(&testNumero);
    }
    else{
        cout << "Ingrese un numero positivo por favor " << endl;
    }
    return 0;
}
void searchForDivisor(const long long int *ptr_toTestNumero){
    unsigned short divisors=0;
    for(long long int iterator = 1 ; iterator <= *ptr_toTestNumero ; iterator ++){
        if(*ptr_toTestNumero%iterator==0){
            divisors++;
        }
    }
    if(divisors==2){
        cout << *ptr_toTestNumero << " ES un numero primo  :)" <<endl;
    }else{
        cout << *ptr_toTestNumero << " NO es un numero primo  :( "<<endl;
    }
}
