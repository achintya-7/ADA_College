#include <iostream>
using namespace std;

void merge(int arr[], int s, int m, int e) {

  int p1 = m - s + 1;
  int p2 = e - m;

  int L[p1], R[p2];

  for (int i = 0; i < p1; i++)
    L[i] = arr[s + i];
  for (int j = 0; j < p2; j++)
    R[j] = arr[m + 1 + j];

  int i, j, k;
  i = 0;
  j = 0;
  k = s;

  while (i < p1 && j < p2) {
    if (L[i] <= R[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = R[j];
      j++;
    }
    k++;
  }

  while (i < p1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < p2) {
    arr[k] = R[j];
    j++;
    k++;
  }
}

void mergeSort(int arr[], int s, int e) {
  if (s < e) {
    int m = s + (e - s) / 2;

    mergeSort(arr, s, m);
    mergeSort(arr, m + 1, e);

    merge(arr, s, m, e);
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

  mergeSort(arr, 0, size - 1);

  cout << "Sorted array: \n";

  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;

  return 0;

}