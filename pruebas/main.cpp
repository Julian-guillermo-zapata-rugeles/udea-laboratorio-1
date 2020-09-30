// comprobar corrupción de memoria circundante con chars
// comprobar escritura inapropiada de cin en un arreglo char

#include <iostream>
using namespace std;

int main()
{
    char mensaje[4]={'h','o','l','a'} ; // se guardará hola para este ejemplo longitud = 4 + \0
    //char *p=&mensaje[0];
    //cout << *p << endl;;
    //cout << mensaje << endl;
    for (short int a=0;a<4;a++){
        cout << &(mensaje[a]) <<endl;
    }
    return 0;
}
