/*
Ejercicio 9. Escriba un programa que pida un número N e imprima el perímetro y área de un
círculo con radio N. Nota: use 3.1416 como una aproximación de pi.
Ej: si se ingresa 1 se debe imprimir:
Perimetro: 6.28352
Area: 3.1416
*/
#include <iostream>
#define PI 3.1416


using namespace std;

int main()
{
    int radio = 0 , *ptr_radio = &radio;
    cout << "Ingrese el radio del circulo : ";
    cin >> *ptr_radio;
    cout << "Perimetro : " << 2*PI*(*ptr_radio)<< endl;
    cout << "Area : " << PI*(*ptr_radio * *ptr_radio) << endl;
    return 0;
}
