#include "Nave.hpp"
#include "Arma.hpp"
#include "ArmaNormal.hpp"
#include "ArmaFuerte.hpp"
#include <iostream>
#include <string>

Nave::Nave(std::string modo, int potencia, int energia, int blindaje)
    : Modo(modo), Potencia(potencia), Energia(energia), Blindaje(blindaje) {
    armaNormal = nullptr; // Inicializar punteros a nullptr
    armaFuerte = nullptr; // Inicializar punteros a nullptr
    }

float Nave::calcularRango(int Energia, int Blindaje, float DanioNormal, float DanioFuerte) {
    // Implementación del cálculo del rango basado en la energía, blindaje y daño
    Rango = (Energia * DanioNormal) + (1.2 *DanioFuerte - (Blindaje / 5));
    return Rango;
}

void Nave::setModo(std::string modo) {
    Modo = modo;
}
std::string Nave::getModo() {
    return Modo;
}

void Nave::setPotencia(int potencia) {
    Potencia = potencia;
}
int Nave::getPotencia() {
    return Potencia;
}

void Nave::setEnergia(int energia) {
    Energia = energia;
}
int Nave::getEnergia() {
    return Energia;
}

void Nave::setBlindaje(int blindaje) {
    Blindaje = blindaje;
}
int Nave::getBlindaje() {
    return Blindaje;
}

void Nave::mostrarInformacion() const {
    std::cout << "Modo: " << Modo << std::endl;
    std::cout << "Potencia: " << Potencia << std::endl;
    std::cout << "Energia: " << Energia << std::endl;
    std::cout << "Blindaje: " << Blindaje << std::endl;
    std::cout << "Rango: " << Rango << std::endl;
}
void Nave::setRango(float rango) {
    Rango = rango;
}
float Nave::getRango() {
    return Rango;
}