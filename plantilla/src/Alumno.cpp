#include "Alumno.hpp"
#include <iostream>
#include <string>
#include <vector>

Alumno::Alumno() : Usuario() {
  this->nombreUsuario = " ";
  this->identificacion = " ";
  // Inicializar cursosInscritos como un vector vacío
    this->cursosInscritos = std::vector<Curso *>();
}

Alumno::Alumno(std::string nombreUsuario, std::string identificacion, std::string correo, std::vector<Curso*> cursosInscritos)
    : Usuario(nombreUsuario, identificacion, correo), cursosInscritos(cursosInscritos) {}

void Alumno::registrar() {
  // Implementar lógica de registro
  std::cout << "Registrando alumno: " << std::endl;
  std::cout << "Nombre de usuario: " << std::endl;
  std::string nombreUsuario;
  std::getline(std::cin, nombreUsuario);
  setNombreUsuario(nombreUsuario);
  std::cout << "Identificación: " << std::endl;
  std::getline(std::cin, identificacion);
  setIdentificacion(identificacion);
  std::cout << "Correo electrónico: " << std::endl;
  std::getline(std::cin, correo);
  setCorreo(correo);
  Alumno::alumnosInscritos.push_back(this); // Agregar el alumno a la lista estática
  std::cout << "Alumno registrado correctamente." << std::endl;
  
}

void Alumno::login() {
  std::cout << "Iniciando sesión como alumno: " << std::endl;
  std::string nombreUsuario;
  std::cout << "Ingrese su nombre de usuario: ";
  std::getline(std::cin, nombreUsuario);
  std::string identificacion;
  std::cout << "Ingrese su identificación: ";
  std::getline(std::cin, identificacion);
  bool usuarioEncontrado = false;
      // Si se encuentra el usuario, se establece el nombre de usuario y la
      // identificación del objeto actual
  for (int i = 0; i < Alumno::alumnosInscritos.size(); ++i) {
    if (Alumno::alumnosInscritos[i]->getNombreUsuario() == nombreUsuario && 
        Alumno::alumnosInscritos[i]->getIdentificacion() == identificacion) {

      usuarioEncontrado = true;
      break;
    }
  }
  if (usuarioEncontrado) {
    std::cout << "Inicio de sesión exitoso." << std::endl;
  } else {
    std::cout << "Usuario o identificación incorrectos. Intente nuevamente."
              << std::endl;
  }

  // Implementar lógica de entrada
}
void Alumno::inscribirCurso() {
  std::string tituloCurso;
  std::cout << "Ingrese el título del curso a inscribir: ";
  std::getline(std::cin, tituloCurso);

  // Aquí se debería buscar el curso por título en una lista de cursos
  // disponibles Por simplicidad, asumimos que el curso existe y lo agregamos
  // directamente
  Curso *nuevoCurso = new Curso(tituloCurso, "Descripción del curso");
  this->cursosInscritos.push_back(nuevoCurso);

  std::cout << "Curso '" << tituloCurso << "' inscrito correctamente."
            << std::endl;
}
void Alumno::mostrarCursos() {
  std::cout << "Cursos inscritos por " << this->nombreUsuario << ":" << std::endl;
  for (const auto &curso : this->cursosInscritos) {
    std::cout << "- " << curso->getTitulo() << ": " << curso->getDescripcion()
              << std::endl;
  }
}
void Alumno::mostrarCalificaciones() {
  std::cout << "Mostrando calificaciones para " << this->nombreUsuario << ":"
            << std::endl;
  // Aquí se debería implementar la lógica para mostrar las calificaciones de
  // los cursos inscritos Por simplicidad, asumimos que no hay calificaciones
  // aún
  std::cout << "No hay calificaciones disponibles." << std::endl;
}
