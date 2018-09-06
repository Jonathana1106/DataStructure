//
// Created by jonathan on 06/09/18.
//
#include "iostream"
#include "BinarySearch.h"

using namespace std;

void BinarySearch::busquedaBinaria(int *array, int num) {

    int l = 0;
    int r, m;

    r = (sizeof(array) - 1);

    busquedaBinaria(array, num, l, r);

}

int BinarySearch::busquedaBinaria(int *array, int num, int l, int r) {

    while (l <= r) {

        int m = ((l + r) / 2);

        if (array[m] == num) {
            cout << "El numero ha sido encontrado.";
            return m;
        }
        else if (array[m] > num){
            r = m - 1;
        }
        else {
            l = m + 1;
        }
    }
    return -1;
    return 0;
}
