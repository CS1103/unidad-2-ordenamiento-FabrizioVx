#include <iostream>
#include <fstream>
#include "Definiciones.h"
#include "Split.h"
#include "Record.h"
#include "MetodosGenerales.h"
#include "MetodosOrdenamiento.h"
#include <algorithm>

using namespace std;



int main() {


    vector <Record> records = VectorRecords();



    vector <Record> ordenado = MaxHeap(records);


    fstream archivoSalida;
    AbreArchivo("impresion.csv",archivoSalida,ios::out);
    archivoSalida << ordenado;


    return 0;
}