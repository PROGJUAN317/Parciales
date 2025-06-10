#pragma once
#include "Curso.hpp"
#include "Usuario.hpp"
#include <string>
#include <vector>

class Alumno : public Usuario {
protected:
  std::vector<Curso*> cursosInscritos;

public:
  // Lista de alumnos inscritos, si es necesario
  static std::vector<Alumno*> alumnosInscritos;
  // Constructores
  Alumno();
  Alumno(std::string nombreUsuario, std::string identificacion, std::string correo, std::vector<Curso*> cursosInscritos);
  // Métodos
  void registrar() override;
  void login() override;

  void inscribirCurso();
  void mostrarCursos();
  void mostrarCalificaciones();
};
