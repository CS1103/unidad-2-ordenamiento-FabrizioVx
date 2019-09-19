//
// Created by rudri on 9/17/2019.
//

#include "catch.hpp"
#include "iostream"
#include "Sort.h"
#include "vector"
#include "ctime"
using namespace std;

TEST_CASE("SORT"){
    SECTION("Crear una lista que contenga funciones"){

        int *array = new int[5];
        for (int i = 0; i < 5; ++i) {
            array[i] = 1+rand()%10;
        }

        Sort p;
        p.QuickSort(array);
        for (int i = 0; i < 5; ++i) {
            cout<<"\n"<<array[i]<<endl;
        }
    }
    SECTION(""){

    }
}
