//
// Created by jonathan on 19/09/18.
//

#ifndef DATASTRUCTURES_INSERTIONSORT_H
#define DATASTRUCTURES_INSERTIONSORT_H

#include "cstdio"

/**
 * Metodo que se encarga de realizar un ordenamiento mediante el algoritmo InsertionSort.
 * @param arr
 * @param n
 */
void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

#endif //DATASTRUCTURES_INSERTIONSORT_H