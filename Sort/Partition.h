//
// Created by jonathan on 21/09/18.
//

#ifndef DATASTRUCTURES_PARTITION_H
#define DATASTRUCTURES_PARTITION_H

#include "Swap.h"

/**
 * Metodo que se encarga de realizar un particion de un array.
 * @param arr
 * @param low
 * @param high
 * @return
 */
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}


#endif //DATASTRUCTURES_PARTITION_H