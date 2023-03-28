#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3, num4, num5;

    cout << "ingrese un primer numero: ", cin >> num1;
    cout << "ingrese un segundo numero: ", cin >> num2;
    cout << "ingrese un tercer numero: ", cin >> num3;
    cout << "ingrese un cuarto numero: ", cin >> num4;
    cout << "ingrese un quinto numero: ", cin >> num5;

    if (num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5 && num2 < num1 && num2 < num3 && num2 < num4 && num2 < num5)
        cout << "el numero mayor es: "<<num1<<endl;
        cout << "el numero menor es: "<<num2<<endl;
    if (num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5 && num3 < num1 && num3 < num2 && num3 < num4 && num3 < num5)
        cout << "el numero mayor es: "<<num1<<endl;
        cout << "el numero menor es: "<<num3<<endl;
    if (num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5 && num4 < num1 && num4 < num2 && num4 < num3 && num4 < num5)
        cout << "el numero mayor es: "<<num1<<endl;
        cout << "el numero menor es: "<<num4<<endl;
    if (num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5 && num5 < num1 && num5 < num2 && num5 < num3 && num5 < num4)
        cout << "el numero mayor es: "<<num1<<endl;
        cout << "el numero menor es: "<<num5<<endl;
    if (num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5 && num1 < num2 && num1 < num3 && num1 < num4 && num1 < num5)
        cout << "el numero mayor es: "<<num2<<endl;
        cout << "el numero menor es: "<<num1<<endl;
    if (num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5 && num3 < num1 && num3 < num2 && num3 < num4 && num3 < num5)
        cout << "el numero mayor es: "<<num2<<endl;
        cout << "el numero menor es: "<<num3<<endl;
    if (num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5 && num4 < num1 && num4 < num2 && num4 < num3 && num4 < num5)
        cout << "el numero mayor es: "<<num2<<endl;
        cout << "el numero menor es: "<<num4<<endl;
    if (num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5 && num5 < num1 && num5 < num2 && num5 < num3 && num5 < num4)
        cout << "el numero mayor es: "<<num2<<endl;
        cout << "el numero menor es: "<<num5<<endl;
    if (num3 > num1 && num3 > num2 && num3 > num4 && num3 > num5 && num1 < num2 && num1 < num3 && num1 < num4 && num1 < num5)
        cout << "el numero mayor es: "<<num3<<endl;
        cout << "el numero menor es: "<<num1<<endl;
    if (num3 > num1 && num3 > num2 && num3 > num4 && num3 > num5 && num2 < num1 && num2 < num3 && num2 < num4 && num2 < num5)
        cout << "el numero mayor es: "<<num3<<endl;
        cout << "el numero menor es: "<<num2<<endl;
    if (num3 > num1 && num3 > num2 && num3 > num4 && num3 > num5 && num4 < num1 && num4 < num2 && num4 < num3 && num4 < num5)
        cout << "el numero mayor es: "<<num3<<endl;
        cout << "el numero menor es: "<<num4<<endl;
    if (num3 > num1 && num3 > num2 && num3 > num4 && num3 > num5 && num5 < num1 && num5 < num2 && num5 < num3 && num5 < num4)
        cout << "el numero mayor es: "<<num3<<endl;
        cout << "el numero menor es: "<<num5<<endl;
    if (num4 > num1 && num4 > num2 && num4 > num3 && num4 > num5 && num1 < num2 && num1 < num3 && num1 < num4 && num1 < num5)
        cout << "el numero mayor es: "<<num4<<endl;
        cout << "el numero menor es: "<<num1<<endl;
    if (num4 > num1 && num4 > num2 && num4 > num3 && num4 > num5 && num2 < num1 && num2 < num3 && num2 < num4 && num2 < num5)
        cout << "el numero mayor es: "<<num4<<endl;
        cout << "el numero menor es: "<<num2<<endl;
    if (num4 > num1 && num4 > num2 && num4 > num3 && num4 > num5 && num3 < num1 && num3 < num2 && num3 < num4 && num3 < num5)
        cout << "el numero mayor es: "<<num4<<endl;
        cout << "el numero menor es: "<<num3<<endl;
    if (num4 > num1 && num4 > num2 && num4 > num3 && num4 > num5 &&num5 < num1 && num5 < num2 && num5 < num3 && num5 < num4)
        cout << "el numero mayor es: "<<num4<<endl;
        cout << "el numero menor es: "<<num5<<endl;
    if (num5 > num1 && num5 >> num2 && num5 > num3 && num5 >> num4 && num1 < num2 && num1 < num3 && num1 < num4 && num1 < num5)
        cout << "el numero mayor es: "<<num5<<endl;
        cout << "el numero menor es: "<<num1<<endl;
    if (num5 > num1 && num5 >> num2 && num5 > num3 && num5 >> num4 && num2 < num1 && num2 < num3 && num2 < num4 && num2 < num5)
        cout << "el numero mayor es: "<<num5<<endl;
        cout << "el numero menor es: "<<num2<<endl;
    if (num5 > num1 && num5 >> num2 && num5 > num3 && num5 >> num4 && num3 < num1 && num3 < num2 && num3 < num4 && num3 < num5)
        cout << "el numero mayor es: "<<num5<<endl;
        cout << "el numero menor es: "<<num3<<endl;
    if (num5 > num1 && num5 >> num2 && num5 > num3 && num5 >> num4 && num4 < num1 && num4 < num2 && num4 < num3 && num4 < num5)
        cout << "el numero mayor es: "<<num5<<endl;
        cout << "el numero menor es: "<<num4<<endl;

    return 0;


}