#include <iostream>
using namespace std;
 
int main (){
    int num;
    cout << "ingrese un numero de cuatro digitos: ", cin >> num;

    int var1, var2, var3, var4;
    var1 = num / 1000;
    num = num % 1000;
    var2 = num / 100;
    num = num % 100;
    var3 = num / 10;
    num = num %10;
    var4 = num;

    cout << var4 << " "<<var3 << " "<<var2 << " "<<var1;

    return 0;

}