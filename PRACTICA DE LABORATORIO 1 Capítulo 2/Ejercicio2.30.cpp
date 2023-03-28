#include <iostream>

using namespace std;

int main (){
    float peso , altura;
    cout << "ingrese su peso en kilogramos: ", cin >> peso;
    cout << "ingrese su altura en metros: ", cin >> altura;

    float imc = 0;
    imc = peso / (altura * altura);

    cout << "este es su imc: "<<imc<<endl;
    if (imc < 18.5)
        cout << "underweight";
    if (18.5 < imc <= 24.9)
        cout << "normal";
    if (25 < imc < 29.9)
        cout << "overweight";
    if (imc >= 30)
        cout << "obese";




    return 0;





}