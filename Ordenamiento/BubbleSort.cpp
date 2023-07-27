#include <iostream>
using namespace std;

void bubbleSort(int array[], int length) {
    bool sorted; //Determinar si el arreglo se encuentra ordenado

    while (true) {
        sorted = true;

        for (int i = 0; i != length - 1; i++) {
            if (array[i] > array[i + 1]) { //Comparar valores consecutivos
                swap(array[i], array[i + 1]); //Intercambiar valores
                sorted = false; //Se realizó un intercambio, se debe iterar de nuevo
            }
        }

        if (sorted) break; //Si no se realizan intercambios en el proceso, el array está ordenado
    }

    for (int i = 0; i < length; i++) { //Imprimir resultado
        cout << array[i] << " ";
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); //Optimización de funciones de entrada y de salida
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int length = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, length);

    return 0;
}