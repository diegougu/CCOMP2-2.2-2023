#include <iostream>

using namespace std;

int main (){
    int radio;

    cout <<"ingrese el radio de su circulo: " , cin >> radio;

    cout << "el area del circulo es: " << 3.14159 * (radio*radio) <<endl;
    cout << "la circunferencia del circulo es: " << 2*3.14159*radio <<endl;
    cout << "el diametro del circulo es: " << 2*radio <<endl;

    return 0;


}