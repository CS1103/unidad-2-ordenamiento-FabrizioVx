#include <iostream>
#include <fstream>
#include "Definiciones.h"
#include "Split.h"
#include "Record.h"
#include "MetodosGenerales.h"
<<<<<<< HEAD
#include "MaxHeap.h"
#include <algorithm>
#include "Merge.h"
#include "Shell.h"
#include "Quick.h"
#include "stack"

=======
#include "MetodosOrdenamiento.h"
#include <algorithm>
>>>>>>> a0ea55ddc302c77780c6bdf07962c1f16e68d571

using namespace std;



int main() {


    vector <Record> records = VectorRecords();

<<<<<<< HEAD
    /*
    MaxHeap(records,false);
    ImprimirArchivo("MaxHeap1.csv",records);
    MaxHeap(records,true);
    ImprimirArchivo("MaxHeap2.csv",records);
    */

    shell_sort(records);
    ImprimirArchivo("Shell4.csv",records);
    shell_sort(records,true);
    ImprimirArchivo("Shell5.csv",records);

    /*
    merge_sort(records);
    ImprimirArchivo("Merge2.csv",records);

    */

    /*
    quick_sort(records,0,1000);
    ImprimirArchivo("Quick2.csv",records);
    */

    return 0;
}

=======


    vector <Record> ordenado = MaxHeap(records);


    fstream archivoSalida;
    AbreArchivo("impresion.csv",archivoSalida,ios::out);
    archivoSalida << ordenado;


    return 0;
}
>>>>>>> a0ea55ddc302c77780c6bdf07962c1f16e68d571
