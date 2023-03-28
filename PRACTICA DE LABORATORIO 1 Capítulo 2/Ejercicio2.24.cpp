#include <iostream>

using namespace std;
int main () {
    int numero1, numero2;

    cout << "ingrese un primer numero: ", cin >> numero1;
    cout << "ingrese un segundo numero: ", cin >> numero2;

    if (numero1 % 2 == 0)
        cout << "el numero1 es PAR" << endl;
    else
        cout << "el numero1 es IMPAR" << endl;
    if (numero2 % 2 == 0)
        cout << "el numero2 es PAR" << endl;
    else
        cout << "el numero2 es IMPAR" << endl;
    if ((numero1 + numero2) % 2 == 0)
        cout << "el numero es PAR" << endl;
    else
        cout << "el numero es IMPAR " << endl;

    return 0;
}