//
// Created by jonathan on 21/09/18.
//

#ifndef DATASTRUCTURES_PRINT_H
#define DATASTRUCTURES_PRINT_H

#include <cstdio>

void printList(int array[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);
}

#endif //DATASTRUCTURES_PRINT_H