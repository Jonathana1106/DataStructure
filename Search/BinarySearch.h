//
// Created by jonathan on 06/09/18.
//

#ifndef DATASTRUCTURES_BINARYSEARCH_H
#define DATASTRUCTURES_BINARYSEARCH_H


class BinarySearch {

public:

    void busquedaBinaria(int array[], int num);

private:

    int *ptrl, *ptrr;
    //int m, l, r;

    int busquedaBinaria(int array[], int num, int l, int r);

};


#endif //DATASTRUCTURES_BINARYSEARCH_H
