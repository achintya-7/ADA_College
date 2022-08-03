#include <iostream>
#include <algorithm>
using namespace std;

int count = 0;

int binarySearch(int arr[], int size, int target){
    sort(arr, arr+size);
    int start = 0;
    int end = size-1;
    while(start <= end) {
        int mid = start + (end-start)/2;
        if(arr[mid] == target){
            return 1;
        } else if (target < arr[mid]) {
            end = mid-1;
        } else {
            start = mid+1;
        }
    }
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
    sort(arr, arr+size);
    
    size = sizeof(arr)/sizeof(int);
    result = binarySearch(arr, size, target);

    if(result != -1) {
        cout << "Your target is in the array "<< endl;
    } else {
        cout << "Target Not Found" << endl;
    }
}