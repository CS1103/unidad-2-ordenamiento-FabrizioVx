
#ifndef PROYECTO_2_ORDENAMIENTO_METODOSGENERALES_H
#define PROYECTO_2_ORDENAMIENTO_METODOSGENERALES_H

#include <iostream>
#include <fstream>
#include "Definiciones.h"
#include "Split.h"
#include "Record.h"
#include "MetodosOrdenamiento.h"

using namespace std;


void AbreArchivo(TipoCadena nombreFisico, std::fstream &archivo, ios_base::openmode modo);
ostream &operator<<(ostream& os, vector <Record> vec);
vector <Record> VectorRecords();




#endif //PROYECTO_2_ORDENAMIENTO_METODOSGENERALES_H
