#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target){
    for (int i = 0; i < size; i++) {
        if(arr[i] == target) {
            return i;
        } 
    }
    return -1;
}

int main() {
        
    cout << "Achintya" << " " << "A2305220450" << endl;
    cout << "Enter size of array" << endl;
    int size;
    int target;
    int result;
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
    result = linearSearch(arr, size, target);

    if(result != -1) {
        cout << "Your target is at position " << result+1 << " and its value is " << arr[result] << endl;
    }
}