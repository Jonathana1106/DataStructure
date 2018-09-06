//
// Created by jonathan on 06/09/18.
//

#include <iostream>
#include "SecuencialSearch.h"

using namespace std;

void SecuencialSearch::busquedaSecuencial(int *array, int num) {

    for(int i = 0; i <= sizeof(array); i++) {
        if(i == sizeof(array)) {
            cout << "El numero no se encuentra.";
            return;
        }
        else if(*array == num) {
            cout << "El numero buscado: ";
            cout << *array;
            cout << " se encuentra en la posicion: ";
            cout << i;
            return;
        }
        else {
            array += 1;
        }
    }

}
