#pragma once
#include "Leccion.hpp"
#include <string>
#include <vector>

class Curso {
public:
  std::string titulo;
  std::string descripcion;
  std::vector<Leccion> lecciones;

public:
  Curso();
  Curso(std::string titulo, std::string descripcion);

  void setTitulo(std::string titulo);
  std::string getTitulo();

  void setDescripcion(std::string descripcion);
  std::string getDescripcion();

  void agregarLeccion(Leccion &leccion);
  void eliminarLeccion(std::string titulo);
  void mostrarInfoCurso();
};
