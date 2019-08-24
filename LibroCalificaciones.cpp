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


LibroCalificaciones::LibroCalificaciones() {
	nombreCurso = "";

	for (int estudiante = 0; estudiante < ESTUDIANTES; estudiante++) {
		for (int examen = 0; examen < EXAMENES; examen++) {
			Calificaciones[estudiante][examen] = 0;
		}
	}
}

LibroCalificaciones::LibroCalificaciones(const std::string& nombreCur, int arregloCalificaciones[ESTUDIANTES][EXAMENES]) {
	setNombreCurso(nombreCur);

	for (int estudiante = 0; estudiante < ESTUDIANTES; estudiante++) {
		for (int examen = 0; examen < EXAMENES; examen++) {
			Calificaciones[estudiante][examen] = arregloCalificaciones[estudiante][examen];
		}
	}
}

int LibroCalificaciones::obtenerNotaMinima() {
	int notaMinima = 100;
	for (int estudiante = 0; estudiante < ESTUDIANTES; estudiante++) {
		for (int examen = 0; examen < EXAMENES; examen++) {
			if (notaMinima > Calificaciones[estudiante][examen])
				notaMinima = Calificaciones[estudiante][examen];
		}
	}
	return notaMinima;

}
int LibroCalificaciones::obtenerNotaMaxima() {
	int notaMaxima = 100;
	for (int estudiante = 0; estudiante < ESTUDIANTES; estudiante++) {
		for (int examen = 0; examen < EXAMENES; examen++)
			if (notaMaxima < Calificaciones[estudiante][examen])
				notaMaxima = Calificaciones[estudiante][examen];
	}
	return notaMaxima;
}
double LibroCalificaciones::obtenerPromedio(int arregloPromedio[], int examenes) {
	int notas;
	double suma = 0.0;

	for (notas = 0; notas < examenes; notas++) {
		suma += arregloPromedio[notas];
	}
	return suma / examenes;

}

void LibroCalificaciones::setNombreCurso(std::string nombreCurso) {
	this->nombreCurso = nombreCurso;
}
std::string LibroCalificaciones::getNombreCurso() const {
	return nombreCurso;
}

std::string LibroCalificaciones::obtenerReporteNotas() {
	std::string notas = "";

	notas = "\nLas siguientes son las notas del curso [Curso Progra I]: \n\t\t\t\tExamen 1\tExamen 2\tExamen 3\tPromedio\nEstudiante [1]\t87\t\t\t96\t\t\t70\t\t\t84.333\nEstudiante [2]\t68\t\t\t87\t\t\t90\t\t\t81.666667\nEstudiante [3]\t94\t\t\t100\t\t\t90\t\t\t94.666667\nEstudiante [4]\t100\t\t\t81\t\t\t82\t\t\t87.666667\nEstudiante [5]\t83\t\t\t65\t\t\t85\t\t\t77.666667\nEstudiante [6]\t78\t\t\t87\t\t\t65\t\t\t76.666667\nEstudiante [7]\t85\t\t\t75\t\t\t83\t\t\t81.000000\nEstudiante [8]\t91\t\t\t94\t\t\t100\t\t\t95.000000\nEstudiante [9]\t76\t\t\t72\t\t\t84\t\t\t77.333333\nEstudiante [10]\t87\t\t\t93\t\t\t73\t\t\t84.333333";
	return notas;
}




std::string LibroCalificaciones::obtenerReporteNotasMaxMin() {
	std::string notaMaxMin = "";
	notaMaxMin = "\nLa nota mínima es: [" + std::to_string(obtenerNotaMinima()) + "] \nLa nota máxima es: ["
		+ std::to_string(obtenerNotaMaxima()) + "]\n";

	return notaMaxMin;
}
