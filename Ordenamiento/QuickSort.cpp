#include <iostream>
using namespace std;

int partition(int array[], int low, int high) {
    int pivot = array[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (array[j] <= pivot) {
            i++;
            swap(array[i], array[j]);
        }
    }
    swap(array[i + 1], array[high]);
    return (i + 1);
}

void quickSort(int array[], int low, int high) {
    if (low < high) {
        int pivot = partition(array, low, high);

        quickSort(array, low, pivot - 1);
        quickSort(array, pivot + 1, high);
    }
}

int main() {
    int arr[] = { 1, 7, 6, 8, 0, 9, 2 };
    int length = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, length - 1);

    cout << "Arreglo ordenado: ";
    for (int k = 0; k < length; k++) {
        cout << arr[k] << " ";
    }
    cout << endl;

    return 0;
}