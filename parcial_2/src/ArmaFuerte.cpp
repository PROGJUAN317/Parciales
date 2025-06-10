#include "Arma.hpp"
#include "ArmaFuerte.hpp"
#include <iostream>
#include <string>

ArmaFuerte::ArmaFuerte(std::string tipo, int GastoEnergia)
    : Arma(tipo), GastoEnergia(GastoEnergia) {}

void ArmaFuerte::setGastoEnergia(int gastoEnergia) {
    GastoEnergia = gastoEnergia;
}
int ArmaFuerte::getGastoEnergia() const {
    return GastoEnergia;
}

void ArmaFuerte::setTipo(std::string tipo) {
    Tipo = tipo;
}
std::string ArmaFuerte::getTipo() const {
    return Tipo;
}

float ArmaFuerte::calcularDanio(int Potencia, int Energia, int GastoEnergia) {
    // Implementación del cálculo del daño basado en potencia, energía y gasto de energía
    float danioFuerte = (Potencia * 5) - (Energia / 100);
    return danioFuerte;
}

void ArmaFuerte::setDanioFuerte(float danioFuerte) {
    DanioFuerte = danioFuerte;
}
float ArmaFuerte::getDanioFuerte() const {
    return DanioFuerte;
}
void ArmaFuerte::mostrarInformacion() {
    std::cout << "Tipo de arma: " << Tipo << std::endl;
    std::cout << "Gasto de Energia: " << GastoEnergia << std::endl;
    std::cout << "Daño Fuerte: " << getDanioFuerte() << std::endl;
}