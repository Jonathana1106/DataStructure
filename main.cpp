#include <iostream>
#include "Search/SecuencialSearch.h"
#include "Search/BinarySearch.h"
#include "Sort/QuickSort.h"
#include "Sort/InsertionSort.h"
#include "Sort/Bubble.h"
#include "Sort/Print.h"

using namespace std;

int main() {

    int structure;

    cout << "Para utilizar la estructura deseada ingrese su numero. \n";
    cout << "1.Secuencial Search. \n";
    cout << "2.Binary Search. \n";
    cout << "3.QuickSort. \n";
    cout << "4.InsertionSort. \n";
    cout << "5.BubbleSort. \n";
    cout << "6.Shell. \n";

    cin >> structure;

    while (structure != 1 && structure != 2 && structure != 3 && structure != 4 && structure != 5 && structure != 6) {

        cout << "Ingrese el numero de la estructura que desea probar nuevamente. \n";
        cout << "1.Secuencial Search. \n";
        cout << "2.Binary Search. \n";
        cout << "3.QuickSort. \n";
        cout << "4.InsertionSort. \n";
        cout << "5.BubbleSort. \n";
        cout << "6.Shell. \n";
        cin >> structure;
    }

    switch (structure) {
        case 1: {
            cout << "Secuencial Search. \n";


            int listSize;
            int numeroBusca;

            cout << "Ingrese el tamano que desea para la lista 5-10: << ";
            cin >> listSize;

            while (listSize < 5 || listSize > 12) {
                cout << "Ingrese el tamano que desea para la lista 5-10: << ";
                cin >> listSize;
            }

            int list[listSize];
            int temp;

            for (int i = 0; i < listSize; i++) {
                cout << "Ingrese un numero: << ";
                cin >> temp;
                list[i] = temp;
            }

            cout << "Ingrese el numero que desea buscar: << ";
            cin >> numeroBusca;

            SecuencialSearch secuencialSearch1;

            secuencialSearch1.busquedaSecuencial(list, numeroBusca);

            // Busqueda charral
            /**
            for(int i = 0; i < listSize; i++) {
                if(list[i] == numeroBusca) {
                    cout << "El numero se encuentra en la posicion: ";
                    cout << i;
                }
            }
            */

            // Imprimir lista charral
            /**
            for(int i = 0; i < listSize; i++) {
                cout << list[i];
                cout << " ";
            }
             */
            break;
        }
        case 2: {
            cout << "Binary Search. \n";


            int listSize;
            int numeroBusca;

            cout << "Ingrese el tamano que desea para la lista 5-10: << ";
            cin >> listSize;

            while (listSize < 5 || listSize > 10) {
                cout << "Ingrese el tamano que desea para la lista 5-10: << ";
                cin >> listSize;
            }

            int list[listSize];
            int temp;
            int *ptr;

            cout << "Los numeros a ingresar deben ser en orden ascentende por favor.";
            cout << "\n";

            for (int i = 0; i < listSize; i++) {
                cout << "Ingrese un numero: << ";
                cin >> temp;
                list[i] = temp;
            }

            cout << "Ingrese el numero que desea buscar: << ";
            cin >> numeroBusca;

            BinarySearch binarySearch1;
            binarySearch1.busquedaBinaria(list, numeroBusca);

            // Imprimir lista charral
            /**
            for (int i = 0; i < listSize; i++) {
                cout << list[i];
                cout << " ";
            }
             */
            break;
        }
        case 3: {
            cout << "QuickSort \n";

            int arr[] = {10, 7, 8, 9, 1, 5};
            int n = sizeof(arr) / sizeof(arr[0]);
            quickSort(arr, 0, n - 1);
            printf("Sorted array: \n");
            printList(arr, n);

            break;
        }
        case 4: {
            cout << "InsertionSort. \n";

            int arr[] = {12, 11, 13, 5, 6};
            int n = sizeof(arr) / sizeof(arr[0]);
            insertionSort(arr, n);
            printList(arr, n);

            break;
        }
        case 5: {
            cout << "BubbleSort. \n";

            int array[] = {0, 9, 8, 7, 6, 5, 4, 3, 2, 1};
            int n = sizeof(array) / sizeof(array[0]);
            bubbleSort(array, n);
            printList(array, n);

            break;
        }
        case 6: {
            cout << "Shell \n";
            break;
        }
    }
    return 0;
}