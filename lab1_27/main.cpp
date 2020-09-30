/*
Julian Guillermo Zapata Rugeles

Ejercicio 27. Escriba un programa que actúe como una calculadora con operaciones de suma,
resta, multiplicación y división, el usuario debe ingresar los operandos y la operación a realizar.
Ej: si se ingresan 3, + y 5 se debe imprimir:
3+5=8

*/
#include <iostream>
#include <string>

using namespace std;
void separar(int *  , string * , int * , int * );

int main()
{
    string operacion="" , a="",b="", literal="";
    bool operador=false;
    cout << "calculadora simple "<<endl;
    cout << "Ingrese una operacion a realizar : ";
    cin >> operacion;
    for (unsigned int i = 0 ; i < operacion.length() ; i++) {
        if(operacion[i]=='+' || operacion[i] =='-' || operacion[i]=='*' ||operacion[i]=='/'){
            operador=true;
            literal=operacion[i];
            i++;
        }
        if(operador==false){
            a=a+operacion[i];
        }
        else{
            b=b+operacion[i];
        }
    }
    if(literal=="+"){
        cout << a<<'+'<<b<< " = " <<stoi(a)+stoi(b) << endl;;
    }
    else if(literal=="-"){
        cout << a<<'-'<<b<< " = " <<stoi(a)-stoi(b) << endl;;
    }
    else if(literal=="*"){
        cout << a<<'*'<<b<< " = " <<stoi(a)*stoi(b) << endl;;
    }
    else if(literal=="/"){
        if(stoi(b)!=0){
            cout << a<<'/'<<b<< " = " <<stoi(a)/stoi(b) << endl;;
        }
        else{
            cout << "No se puede dividir por cero "<< endl;
        }
    }

    return 0;
}
