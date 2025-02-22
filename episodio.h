#ifndef EPISODIO_H
#define EPISODIO_H

#include "video.h"

#include <iostream>
using namespace std;

class Episodio : public Video {
  private:
  int temporada, episodio;
  string titulo;
public:
  Episodio(string, string, string, double, int, int, string);
  virtual ~Episodio();

  // Métodos accesores
  int getTemporada();
  int getEpisodio(); //agregar
  string getTitulo(); //agregar
  void mostrar() override; 

};

#endif