#include <iostream>
#include <string>

class MotorVehicle {
private:
    std :: string marca;
    std :: string tipodecombustible;
    int anodefabricacion;
    std :: string color;
    int capacidaddemotor; 
public :
    MotorVehicle(std:: string marca_, std:: string tipodecombustible_, int anodefabricacion_, std :: string color_, int capacidaddemotor_  )
        :marca(marca_), tipodecombustible(tipodecombustible_), anodefabricacion(anodefabricacion_), color(color_), capacidaddemotor(capacidaddemotor_) {}

    void setMarca (std :: string marca_) {
        marca = marca_;
    }

    std :: string getMarca() const {
        return marca;
    }

    void setTipodeCombustible (std :: string tipodecombustible_){
        tipodecombustible = tipodecombustible_;

    }

    std :: string getTipodecombustible() const {
        return tipodecombustible;
    }

    void setAnodefabricacion (int anodefabricacion_) {
        anodefabricacion = anodefabricacion_;
    }

    int getAnodefabriacion () const {
        return anodefabricacion;
    }

    void setColor (std:: string color_) {
        color = color_;
    }

    std :: string getColor() const {
        return color;
    }

    void setCapacidaddelmotor (int capacidaddemotor_) {
        capacidaddemotor = capacidaddemotor_;
    }

    int getCapacidaddelmotor () const {
        return capacidaddemotor;
    }


};