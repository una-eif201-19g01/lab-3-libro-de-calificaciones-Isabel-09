/*
 * =====================================================================================
 *
 *       Filename:  LibroCalificaciones.h
 *
 *    Description:  Reporte de calificaciones
 *
 *        Created:  2019-08-12
 *
 *         Author:  Maikol Guzman Alan mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */


#ifndef CALIFICACIONES_LIBROCALIFICACIONES_H
#define CALIFICACIONES_LIBROCALIFICACIONES_H

#include <string>

class LibroCalificaciones {
    int ESTUDIANTES = 10;
    int EXAMENES = 3;
    std::string nombreCurso;
    int Calificaciones[ESTUDIANTES][EXAMENES];
    int obtenerNotaMinima();
    int obtenerNotaMaxima();
    double obtenerPromedio(const int[],const int);
     
public:
    LibroCalificaciones();
    LibroCalificaciones(const std::string nombreCurso,int[][]);
   std:: string obtenerReporteNotas();
   std::string obtenerReporteNotasMaxMin();

   void setNombreCurso(std::string nombreCurso) { 
   }

   std::string getNombreCurso() const {
   }
   
};


#endif //CALIFICACIONES_LIBROCALIFICACIONES_H
