#include "Usuario.hpp"
#include <iostream>
#include <string>
#include <vector>

Usuario::Usuario() : nombreUsuario(""), identificacion(""), correo("") {}

Usuario::Usuario(std::string nombre, std::string identificacion, std::string correo)
    : nombreUsuario(nombre), identificacion(identificacion), correo(correo) {}

void Usuario::setNombreUsuario(std::string nombre) {
    this->nombreUsuario = nombre;
}
std::string Usuario::getNombreUsuario() {
    return nombreUsuario;
}

void Usuario::setIdentificacion(std::string identificacion) {
    this->identificacion = identificacion;
}
std::string Usuario::getIdentificacion() {
    return identificacion;
}

void Usuario::setCorreo(std::string correo) {
    this->correo = correo;
}
std::string Usuario::getCorreo() {
    return correo;
}
