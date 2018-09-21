//
// Created by jonathan on 21/09/18.
//

#ifndef DATASTRUCTURES_SWAP_H
#define DATASTRUCTURES_SWAP_H

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

#endif //DATASTRUCTURES_SWAP_H