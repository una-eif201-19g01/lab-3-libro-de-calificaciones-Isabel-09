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
#include <string.h>
#include <iostream>

LibroCalificaciones::LibroCalificaciones(const std::string nombreCurso, int[][]){
    nombreCurso="";
    for(int estudiante;estudiante<ESTUDIANTES;estudiante++)
         for(int examen=0; examen<EXAMENES;estudiante++)
        int [estudiante][examen]=0;
}
LibroCalificaciones::LibroCalificaciones(){
     for(int estudiante=0;estudiante<ESTUDIANTES;estudiante++)
       for(int examen=0; examen<EXAMENES;estudiante++)
            Calificaciones[estudiante][examen]=0; 
}
int LibroCalificaciones::obtenerNotaMinima() {
    int notaMinima = Calificaciones[0][0];
    for (int estudiante = 0; estudiante < ESTUDIANTES; estudiante++) {
        for (int examen; examen < EXAMENES; examen++)
            if (notaMinima > Calificaciones[estudiante][examen])
                notaMinima = Calificaciones[estudiante][examen];
    }
    return notaMinima;
}

int LibroCalificaciones::obtenerNotaMaxima() {
    int notaMaxima = Calificaciones[0][0];
    for (int estudiante = 0; estudiante < ESTUDIANTES; estudiante++) {
        for (int examen; examen < EXAMENES; examen++)
            if (notaMaxima > Calificaciones[estudiante][examen])
                notaMaxima = Calificaciones[estudiante][examen];
    }
    return notaMaxima;
}
double LibroCalificaciones::obtenerPromedio(const int[], const int){
    int suma=0;
    for(int i=0;i<int[];i++){
       suma+=i; 
}
    return suma/EXAMENES;
}
std::string LibroCalificaciones::obtenerReporteNotas(){
    std::string notas="";
    for (int examen=0; examen < EXAMENES; examen++){
        for (int estudiante = 0; estudiante < ESTUDIANTES; estudiante++)
          //  notas=notas+"El Examen :["+std::to_string(examen)+"] El Estudiante ["+ std::to_string(estudiante)+"] Promedio"+obtenerPromedio();
}
    return notas;
}
std::string LibroCalificaciones::obtenerReporteNotasMaxMin(){
    std::string notaMaxMin="";
   notaMaxMin=notaMaxMin+"\nLa nota mínima es: ["obtenerNotaMinima()+"] \nLa nota máxima es: ["+ obtenerNotaMaxima()+"]\n";
   return notaMaxMin;
}
