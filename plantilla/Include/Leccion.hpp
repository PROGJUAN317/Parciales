#pragma once
#include <string>

class Leccion {
private:
  std::string tema;
  int duracionMinutos;

public:
  Leccion();
  Leccion(std::string tema, int duracionMinutos);

  void setTema(std::string tema);
  std::string getTema();

  void setDuracionMinutos(int duracionMinutos);
  int getDuracionMinutos();

  std::string getAllInformation();
};
