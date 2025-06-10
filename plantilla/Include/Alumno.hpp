#pragma once
#include "Curso.hpp"
#include "Usuario.hpp"
#include <string>
#include <vector>

class Alumno : public Usuario {
protected:
  std::vector<Curso*> cursosInscritos;

public:
  // Constructores
  Alumno();
  Alumno(std::string nombreUsuario, std::string identificacion, std::string correo, std::vector<Curso*> cursosInscritos);

  void registrar() override;
  void login() override;

  void inscribirCurso();
  void mostrarCursos();
  void mostrarCalificaciones();
};
