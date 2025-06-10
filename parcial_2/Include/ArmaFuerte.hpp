#include "Arma.hpp"
#include "Nave.hpp"
#include <iostream>
#include <string>

class ArmaFuerte : public Arma {
    protected:
    int GastoEnergia;
    float DanioFuerte;

    public:
    ArmaFuerte(std::string tipo, int GastoEnergia);

    float calcularDanio(int Potencia, int Energia, int GastoEnergia) override;

    void mostrarInformacion();

    void setGastoEnergia(int gastoEnergia);
    int getGastoEnergia() const;

    void setTipo(std::string tipo);
    std::string getTipo() const;

    void setDanioFuerte(float danioFuerte);
    float getDanioFuerte() const;
};
