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
    
    cout << endl;
    cout << "Complexity : O(n^2)" << endl;
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
    selectionSort(arr, size);
}

