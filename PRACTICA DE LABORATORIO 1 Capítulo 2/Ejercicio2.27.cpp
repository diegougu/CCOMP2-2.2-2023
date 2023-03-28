#include <iostream>

using namespace std;

int main (){
    char pal;
    
    cout << "ingrese una letra o simbolo: ", cin >> pal;

    cout << static_cast <int> (pal);

    return 0;

}