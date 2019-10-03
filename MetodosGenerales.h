
#ifndef PROYECTO_2_ORDENAMIENTO_METODOSGENERALES_H
#define PROYECTO_2_ORDENAMIENTO_METODOSGENERALES_H

#include <iostream>
#include <fstream>
#include "Definiciones.h"
#include "Split.h"
#include "Record.h"
<<<<<<< HEAD
=======
#include "MetodosOrdenamiento.h"
>>>>>>> a0ea55ddc302c77780c6bdf07962c1f16e68d571

using namespace std;


void AbreArchivo(TipoCadena nombreFisico, std::fstream &archivo, ios_base::openmode modo);
ostream &operator<<(ostream& os, vector <Record> vec);
<<<<<<< HEAD

vector <Record> VectorRecords();


template<template<typename , typename...>class container, typename T>
void ImprimirArchivo(string nombre, container<T> vec){
    fstream archivoSalida;
    AbreArchivo(nombre,archivoSalida,ios::out);
    archivoSalida << vec;
}
=======
vector <Record> VectorRecords();



>>>>>>> a0ea55ddc302c77780c6bdf07962c1f16e68d571

#endif //PROYECTO_2_ORDENAMIENTO_METODOSGENERALES_H
