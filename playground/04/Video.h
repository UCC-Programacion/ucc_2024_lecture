#pragma once

#include "Comentario.h"
#include "Organizacion.h"
#include <string>

class Video {
private:
  std::string m_nombre;
  unsigned int m_duracion_en_segundos;
  Organizacion m_creador;
  unsigned int m_cantidad_me_gusta;

  Comentario m_comentarios[10];

  //   Comentario* m_comentarios;
  //   int m_cantidad_de_comentarios;
  //   std::vector<Comentario> m_comentarios;

  Video* m_videos_relacionados[5];

public:
  Video(std::string nombre, unsigned int duracion_en_segundos)
    : m_nombre { nombre }
    , m_duracion_en_segundos { duracion_en_segundos }
  {
  }
  void play();
  void pause();
  void fast_forward();
  void rewind();

  void me_gusta()
  {
    m_cantidad_me_gusta++;
  }
};