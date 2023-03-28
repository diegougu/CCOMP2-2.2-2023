#include <iostream>
using namespace std;
int main(){

    int num1, num2, num3;

    cout << "ingresa un primer numero: ", cin >> num1;
    cout << "ingresa un segundo numero: ", cin >> num2;
    cout << "ingresa un tercer numero: ", cin >> num3;

    if (num1 % num3 == 0)
        cout << num1 << " es factor de " << num3 << endl;
    else
        cout << num1 <<" no es factor de " << num3 << endl;
    
    if (num2 % num3 == 0) 
        cout << num2 << " es factor de " << num3 << endl;
    else
        cout << num2 << " no es factor de " << num3;

    return 0;
    



}