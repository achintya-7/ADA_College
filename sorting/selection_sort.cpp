#include <iostream>
using namespace std;

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;

        for (int j = i+1; j < size; j++) {
            if(arr[minIndex] > arr[j]) {
                minIndex = j;
            }
        }

        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;

    }

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[10] = {1,2,4,52,1,2,35,6,6,32};
    int size = sizeof(arr)/sizeof(int);
    selectionSort(arr, size);
}

