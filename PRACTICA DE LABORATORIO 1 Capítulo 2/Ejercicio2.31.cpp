#include <iostream>
using namespace std;

int main()
{
    float media_de_galon_km, precio_galon, km, tarifa_del_dia, peaje;

    float coste_diario;

    cout << "Ingrese la cantidad de km que recorrió de su casa a su trabajo: ", cin >> km;

    cout << "Ingrese el coste de galón: ",cin >> precio_galon;

    cout << "Ingrese la tarifa diaria de aparcamiento: ",cin >> tarifa_del_dia;

    cout << "Ingrese el coste del peaje: ",cin >> peaje;
  
    media_de_galon_km = km/precio_galon;

    coste_diario = media_de_galon_km + tarifa_del_dia + peaje;

    cout << "\nEl costo total a diario es: " << coste_diario << " soles" << endl;

  return 0;
}