#pragma once
#include "Curso.hpp"
#include "Usuario.hpp"
#include <string>
#include <vector>

class Docente : public Usuario {
public:
  std::string codigoDocente;
  std::vector<Curso *> cursosPublicados;

  Docente();
  Docente(std::string codigoDocente);

  void registrar() override;
  void entrar() override;
  void agregarNuevoCurso();

  // Setters y Getters
  void setCodigoDocente(std::string codigoDocente);
  std::string getCodigoDocente();
};
