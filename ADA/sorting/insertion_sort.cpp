#include <iostream>
using namespace std;

void insertionSort(int arr[], int size) {
    int i, key, j; 
    for (i = 1; i < size; i++)
    { 
        key = arr[i]; 
        while (j >= 0 && arr[j] > key)
        { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key; 
    } 

    for (i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    
    cout << "Achintya" << " " << "A2305220450" << endl;
    cout << "Enter size of array" << endl;
    int size;
    cin >> size;
    int arr[size];

    cout << "Enter your array" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    size = sizeof(arr)/sizeof(int);
    insertionSort(arr, size);
}

