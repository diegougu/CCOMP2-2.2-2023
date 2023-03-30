#include <iostream>
#include "Ejercicio3.12.h"
using namespace std;


int main() {
    Fecha fecha(5, 10, 2023);

    cout << "Fecha inicial: ";
    fecha.displayDate();
    int var1,var2,var3;

    cout<<"Digite el mes correspondiente: "<<endl,cin>>var1;
    fecha.setMes(var1);

    cout<<"Digite el día correspondiente: "<<endl,cin>>var2;
    fecha.setDia(var2);

    cout<<"Digite el año correspondiente: "<<endl,cin>>var3;
    fecha.setAno(var3);

    cout << "Fecha modificada: ";
    fecha.displayDate();

    return 0;
}