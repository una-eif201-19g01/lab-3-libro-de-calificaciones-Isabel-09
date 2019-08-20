/*
 * =====================================================================================
 *
 *       Filename:  LibroCalificaciones.cpp
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

#include "LibroCalificaciones.h"
#include <iomanip>
#include <iostream>

LibroCalificaciones(){
    nombreCurso=" ";
    for (int estudiante; estudiante < ESTUDIANTES; estudiante++) {
        for (int examen = 0; examen < EXAMENES; estudiante++) {
            Calificaciones[estudiante][examen] = 0;
        }
    }
}
LibroCalificaciones( std::string &nombreCur, int arregloCalificaciones[ESTUDIANTES][EXAMENES]) {
setNombreCurso(nombreCur);

for (int estudiante; estudiante < ESTUDIANTES; estudiante++) {
for (int examen = 0; examen < EXAMENES; estudiante++) {
Calificaciones[estudiante][examen] = arregloCalificaciones[estudiante][examen];
}
}
}

int obtenerNotaMinima(){
    int notaMinima =100;
    for (int estudiante = 0; estudiante < ESTUDIANTES; estudiante++) {
        for (int examen=0; examen < EXAMENES; examen++){
            if (notaMinima > Calificaciones[estudiante][examen])
                notaMinima = Calificaciones[estudiante][examen];
        }
    }
    return notaMinima;

}
int obtenerNotaMaxima(){
    int notaMaxima = 100;
    for (int estudiante = 0; estudiante < ESTUDIANTES; estudiante++) {
        for (int examen=0; examen < EXAMENES; examen++)
            if (notaMaxima < Calificaciones[estudiante][examen])
                notaMaxima = Calificaciones[estudiante][examen];
    }
    return notaMaxima;
}
double obtenerPromedio(){

    int suma=0;
    for (int estudiante = 0; estudiante < ESTUDIANTES ; estudiante++) {
        for (int examen=1; examen < EXAMENES; examen++)
            suma+=Calificaciones[estudiante][examen];
    }
    return suma/EXAMENES;
}



void setNombreCurso(std::string nombreCurso){
    this->nombreCurso=nombreCurso;
}

string obtenerReporteNotas(){
    std::string notas="";
    for (int examen=0; examen < 3; examen++){
        for ( int estudiante = 0; estudiante < ESTUDIANTES; estudiante++){
            notas=notas + "\n\t\t\t\tEl EXAMEN[ "+ std::to_string(examen)+"] \tPromedio"
                  +std::to_string(obtenerPromedio())+"\nESTUDIANTE["+std::to_string(estudiante)+"]\t"+std::to_string(Calificaciones[estudiante][examen])+"\t\t\t";

        }
    }
    return notas;
}
string obtenerReporteNotasMaxMin(){
    std::string notaMaxMin="";
    notaMaxMin="\nLa nota mínima es: ["+to_string(obtenerNotaMinima())+"] \nLa nota máxima es: ["
               + std::to_string(obtenerNotaMaxima())+"]\n";
    return notaMaxMin;
}

};


