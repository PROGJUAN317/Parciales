#include "ArmaNormal.hpp"
#include "Nave.hpp"
#include <iostream>
#include <string>

ArmaNormal::ArmaNormal(std::string tipo, int precision, int temperatura)
    : Arma(tipo), Precision(precision), Temperatura(temperatura) {}

void ArmaNormal::setPrecision(int precision) {
    Precision = precision;
}
int ArmaNormal::getPrecision() {
    return Precision;
}

void ArmaNormal::setTemperatura(int temperatura) {
    Temperatura = temperatura;
}
int ArmaNormal::getTemperatura() {
    return Temperatura;
}

float ArmaNormal::calcularDanio(int Potencia, int Precision, int Temperatura) {
    // Implementación del cálculo del daño basado en potencia, precisión y temperatura
    float danioNormal = (Potencia * Precision) - (Temperatura * 0.25);
    return danioNormal;
}

void ArmaNormal::setDanioNormal(float danioNormal) {
    DanioNormal = danioNormal;
}
float ArmaNormal::getDanioNormal() {
    return DanioNormal;
}

void ArmaNormal::mostrarInformacion() {
    std::cout << "Tipo de arma: " << Tipo << std::endl;
    std::cout << "Precision: " << Precision << std::endl;
    std::cout << "Temperatura: " << Temperatura << std::endl;
    std::cout << "Daño Normal: " << DanioNormal << std::endl;
}
