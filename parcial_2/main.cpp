#include "Nave.hpp"
#include "Arma.hpp"
#include "ArmaNormal.hpp"
#include "ArmaFuerte.hpp"
#include <iostream>
using namespace std;

void setModo(string &modo) {
    if (modo != "normal" && modo != "fuerte") {
        cout << "Modo no válido. Se establecerá a 'normal'." << endl;
        modo = "normal";
    }
}

int main(){
    // Crear una nave
    string modo;
    getline(cin, modo);
    setModo(modo);
    int potencia, energia, blindaje;
    getline(cin, potencia);
    getline(cin, energia);
    getline(cin, blindaje);
    Nave nave(modo, potencia, energia, blindaje);
    nave.mostrarInformacion();
    // Crear un arma normal
    string tipoNormal;
    getline(cin, tipoNormal);
    int precision, temperatura;
    getline(cin, precision);
    getline(cin, temperatura);
    ArmaNormal armaNormal(tipoNormal, precision, temperatura);
    armaNormal.setTipo(tipoNormal);
    armaNormal.setPrecision(precision);
    armaNormal.setTemperatura(temperatura);
    armaNormal.setDanioNormal(armaNormal.calcularDanio(nave.getPotencia(), precision, temperatura));
    armaNormal.mostrarInformacion();
    // Crear un arma fuerte
    string tipoFuerte;
    getline(cin, tipoFuerte);
    int gastoEnergia;
    getline(cin, gastoEnergia);
    ArmaFuerte armaFuerte(tipoFuerte, gastoEnergia);
    armaFuerte.setTipo(tipoFuerte);
    armaFuerte.setGastoEnergia(gastoEnergia);
    armaFuerte.setDanioFuerte(armaFuerte.calcularDanio(nave.getPotencia(), nave.getEnergia(), gastoEnergia));
    armaFuerte.mostrarInformacion();
    // Calcular el rango de la nave
    float danioNormal = armaNormal.getDanioNormal();
    float danioFuerte = armaFuerte.getDanioFuerte();
    float rango = nave.calcularRango(nave.getEnergia(), nave.getBlindaje(), danioNormal, danioFuerte);
    nave.setRango(rango);
    cout << "Rango calculado: " << nave.getRango() << endl;
    // Mostrar información de la nave
    nave.mostrarInformacion();
    // Mostrar información de las armas
    armaNormal.mostrarInformacion();
    armaFuerte.mostrarInformacion();
    // Finalizar el programa
    cout << "Programa finalizado." << endl;

    return 0;
}
