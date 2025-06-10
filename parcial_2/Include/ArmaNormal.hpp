#include "Arma.hpp"
#include "Nave.hpp"
#include <iostream>
#include <string>

class ArmaNormal : public Arma {

    protected:
    int Precision;
    int Temperatura;
    float DanioNormal;

    public:
    ArmaNormal(std::string tipo, int precision, int temperatura);


    void setPrecision(int precision);
    int getPrecision();

    void setTemperatura(int temperatura);
    int getTemperatura();

    float calcularDanio(int Potencia, int Precision, int Temperatura) override;

    void setDanioNormal(float danioNormal);
    float getDanioNormal();

    void mostrarInformacion();
};
