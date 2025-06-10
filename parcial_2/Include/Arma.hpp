#include "Nave.hpp"
#include <iostream>
#include <string>

class Arma {
    protected:
    std::string Tipo;

public:
    Arma(std::string tipo) : Tipo(tipo) {}

    virtual float calcularDanio(float multiplicador) = 0;

    void mostrarInformacion();

    virtual float calcularDanio(int Potencia, int blindaje, int Energia) = 0;

    void setTipo(std::string tipo);
    std::string getTipo();
};
