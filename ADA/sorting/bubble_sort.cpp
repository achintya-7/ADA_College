#include <iostream>
using namespace std;

void bubbleSort (int arr [], int size) {
    int i, j;
    
    for (int i = 0; i < size; i++) {
        // after each iteration of i, we will get max value at end
        for (int j = 0; j < size - i - 1; j++) { 
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
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
    bubbleSort(arr, size);
}