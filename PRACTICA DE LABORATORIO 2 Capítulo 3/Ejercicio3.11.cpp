#include <iostream>
#include <string>

#include "Ejercicio3.3POO.h"

int main() {
    std :: string marca, tipodecombustible, color;
    int anodefabricacion, capacidaddemotor;
    std :: cout << "ingrese la marca: " , std::cin >> marca;
    std :: cout << "ingresa el tipo de combustible: ", std:: cin >> tipodecombustible;
    std :: cout << "ingresa el año de fabricacion: ", std :: cin >> anodefabricacion;
    std :: cout << "ingresa el color : ", std :: cin >> color;
    std :: cout << "ingresa la capacidad del motor: ", std :: cin >> capacidaddemotor;

    MotorVehicle micarro(marca, tipodecombustible, anodefabricacion, color, capacidaddemotor);


    std :: cout <<"\nMarca: "<< micarro.getMarca() << std:: endl;
    std :: cout <<"Tipo de combustible: " << micarro.getTipodecombustible() << std:: endl;
    std :: cout <<"Año de fabricacion: " << micarro.getAnodefabriacion() << std :: endl;
    std :: cout <<"Color: " << micarro.getColor()<< std :: endl;
    std :: cout << "Capacidad de motor: " << micarro.getCapacidaddelmotor() << std :: endl;

    return 0;

}
