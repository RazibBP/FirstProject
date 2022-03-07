
#include <iostream>
using namespace std;

void printArray(int array[], int n) {
  for (int i=0; i<n; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

void insertionSort(int array[], int n) {
  for (int i=1; i<n; i++) {
    int tremp= array[i];
    int j = i- 1;

    while (tremp < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = tremp;
  }
}

int main() {
  int data[] = {9, 5, 1, 4, 3};
  int n=sizeof(data) / sizeof(data[0]);
  insertionSort(data, n);
  cout << "Sorted array in ascending order:\n";
  printArray(data, n);
}
