#include <iostream>
using namespace std;

void swap(int arr[], int a, int b) {
  int temp = arr[a];
  arr[a] = arr[b];
  temp = arr[b];
}

int helperPartition(int arr[], int s, int e) {

  int pivot = arr[e];
  int i = s - 1;
  for (int j = s; j <= e; j++) {
    if (arr[j] < pivot) {
      i++;
      swap(arr, i, j);
    }
  }
  swap(arr, i+1, e);
  return i+1;
}

void quickSort(int arr[], int s, int e) {
    if (s < e) {
      int ans = helperPartition(arr, s, e);
      quickSort(arr, s, ans-1); 
      quickSort(arr, ans+1, e);
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

  quickSort(arr, 0, size - 1);

  cout << "Sorted array: \n";

  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;

  return 0;

}