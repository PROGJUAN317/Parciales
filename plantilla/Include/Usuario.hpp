#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "Alumno.hpp"
#include "Docente.hpp"
#include "Curso.hpp"

class Usuario {
protected:
  std::string nombreUsuario;  
  std::string identificacion;
  std::string correo;

public:
  // Metodos
  Usuario();
  Usuario(std::string nombre, std::string identificacion, std::string correo);

  virtual void registrar() = 0;
  virtual void login() = 0;

  // setters y getters
  void setNombreUsuario(std::string nombre);
  std::string getNombreUsuario();

  void setIdentificacion(std::string identificacion);
  std::string getIdentificacion();

  void setCorreo(std::string correo);
  std::string getCorreo();
};
