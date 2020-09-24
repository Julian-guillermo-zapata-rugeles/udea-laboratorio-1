/*
Ejercicio 21. Escriba un programa que pida un carácter C, si es una letra la debe convertir de
mayúscula a minúscula y viceversa e imprimirla.
Ej: si se ingresa B se debe imprimir:
Letra convertida: b
y si se ingresa k se debe imprimir:
Letra convertida: K
*/
#include <iostream>

using namespace std;

int main()
{
    char prueba;
    char limiteMinuscula_a = 'a' , limiteMinuscula_z = 'z' ;
    char limiteMayuscula_A = 'A',  limiteMayuscula_Z='Z';
    int diferencia = limiteMinuscula_a-limiteMayuscula_A;

    cout << "Ingrese una letra A - Z : ";
    cin >> prueba;

    /*cout << int(prueba) << " -> " << int(limiteMinuscula_a)<<" -> "<<int(limiteMinuscula_z) <<endl;*/

    if (int(prueba) >= int(limiteMinuscula_a) && int(prueba) <= int(limiteMinuscula_z)) {
        cout << "MINUSCULA DETECTADA : "<< prueba << " --->  " <<char(prueba-diferencia) << endl;
    }
    else if (int(prueba) >= int(limiteMayuscula_A) && int(prueba) <= int(limiteMayuscula_Z)) {
        cout << "MAYUSCULA DETECTADA : se convierte "<< prueba << " --->  " <<char(prueba+diferencia) << endl;
    }
    else{
        cout << "No ingresaste un valor entre a-z , A-Z "<<endl;
    }
    return 0;
}
