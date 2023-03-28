#include <iostream>

using namespace std;

int main (){
    int edad;

    cout << "ingrese su edad: ", cin >> edad;

    double MHR, MHR_2001 , MHR_2007 , MHR_2012;

    MHR = 220 - edad;
    MHR_2001 = 208 -0.7*(edad);
    MHR_2007 = 207 -0.7*(edad);
    MHR_2012 = 211 - 0.64*(edad);

    cout << "Segun los estudios su MHR puede ser: "<<endl;

    cout << "Por forma general: "<<MHR<<endl;
    cout << "Por forma del 2001: "<<MHR_2001<<endl;
    cout << "Por forma del 2007: "<<MHR_2007<<endl;
    cout << "Por forma del 2012: "<<MHR_2012<<endl;

    return 0;


    


}