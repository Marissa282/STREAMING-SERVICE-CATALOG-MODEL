#ifndef SERIE_H
#define SERIE_H

#include "episodio.h"
#include <iostream>
#include <vector>
using namespace std;

class Serie {
  private:
  string id;
  string nombre;
  vector<Episodio> episodios;
  int calificacion;
public:
  Serie(string, string);
  virtual ~Serie();
  //[...] }
  // Métodos accesores
  string getId();
  string getNombre();
  int getCalificacion();
  vector<Episodio> getEpisodios();
  void setEpisodios(vector<Episodio>);
  string getGenero();

  // Métodos modificadores
  void setId(string);

  // Métodos especializados
  void agregarEpisodio(Episodio);
  void mostrar(); 


};

#endif