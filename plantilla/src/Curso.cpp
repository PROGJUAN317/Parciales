#include "../include/Curso.hpp"

#include <iostream>
#include <string>

Curso::Curso() {}

Curso::Curso(std::string titulo, std::string descripcion) {
  this->titulo = titulo;
  this->descripcion = descripcion;
}

void Curso::setTitulo(std::string titulo) { this->titulo = titulo; }

std::string Curso::getTitulo() { return this->titulo; }
void Curso::setDescripcion(std::string descripcion) {
  this->descripcion = descripcion;
}
std::string Curso::getDescripcion() { return this->descripcion; }
