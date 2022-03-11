#include <iostream>
using namespace std;
void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
int partition (int arr[], int l, int h) 
{ 
    int pivot=arr[h];
    int i = (l - 1);   
   
    for (int j = l; j <= h- 1; j++) 
    { 
        if (arr[j] <= pivot) 
        { 
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[h]); 
    return (i + 1);

void quickSort(int arr[], int low, int high) 
{ 
    if (l< h) 
    { 
        int pivot = partition(arr, l, h); 
   
        quickSort(arr, l, pivot - 1); 
        quickSort(arr, pivot + 1, h); 
    } 
} 
   
void displayArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        cout<<arr[i]<<"\t"; 
      
} 
   
int main() 
{ 
    int arr[] = {12,23,3,43,51,35,19,45}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    cout<<"Input array"<<endl;
    displayArray(arr,n);
    cout<<endl;
    quickSort(arr, 0, n-1); 
    cout<<"Array sorted with quick sort"<<endl; 
    displayArray(arr,n); 
    return 0; 
}

