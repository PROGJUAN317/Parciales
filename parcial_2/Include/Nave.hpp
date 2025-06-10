#include "Arma.hpp"
#include "ArmaNormal.hpp"
#include "ArmaFuerte.hpp"
#include <iostream>
#include <string>

class Nave {
    private:
    std::string Modo;
    int Potencia;
    int Energia;
    int Blindaje;
    float Rango;
    ArmaNormal* armaNormal;
    ArmaFuerte* armaFuerte;

public:
    Nave::Nave(std::string modo, int potencia, int energia, int blindaje)
        : Modo(modo), Potencia(potencia), Energia(energia), Blindaje(blindaje) {}

    float Nave::calcularRango(int Energia, int Blindaje, float DanioNormal, float DanioFuerte);

    void Nave::setModo(std::string modo);
    std::string Nave::getModo();

    void Nave::setPotencia(int potencia);
    int Nave::getPotencia();

    void Nave::setEnergia(int energia);
    int Nave::getEnergia();

    void Nave::setBlindaje(int blindaje);
    int Nave::getBlindaje();

    void Nave::mostrarInformacion() const;

    void Nave::setRango(float rango);
    float Nave::getRango();
};