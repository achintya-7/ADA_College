#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int arr[], int start, int end, int target){
    if(start <= end) {
        int mid = start + (end-start)/2;

        if(arr[mid] == target) {
            return mid;
        }
        if (target < arr[mid]) {
            // call the same function but change the end index
            return binarySearch(arr, start, mid-1, target);
        } else {
            // call the same function but change the start index
            return binarySearch(arr, mid+1, end, target);
        }
    }
    // if start <= end, return -1 as the target was not found in all the sub parts of recursion
    return -1;
}

int main() {
    int size;
    int target;
    int result;

    cout << "Achintya" << " " << "A2305220450" << endl;
    cout << "Enter size of array" << endl;
    cin >> size;
    int arr[size];

    cout << "Enter your array" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << endl;

    cout << "Enter your target" << endl;
    cin >> target;
    
    size = sizeof(arr)/sizeof(int);
    result = binarySearch(arr, 0, size-1, target);

    if(result != -1) {
        cout << "Your target is in the array "<< endl;
    } else {
        cout << "Target Not Found";
    }
}