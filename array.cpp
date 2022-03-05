#include <iostream>
using namespace std;

void bubbleSort(int array[], int j) {
  
  for (int a = 0; a <j; a++) 
  {
      	  
    	for (int i = 0; i < j - a; i++) 
    	{
    
  		   if (array[i] > array[i + 1]) 
     		   {

       			 int temp = array[i];
        		 array[i] = array[i + 1];
      		 	 array[i + 1] = temp;
      		   }
        }
  }
}

void printArray(int array[], int j) 
{
  for (int i = 0; i < j; i++)
  { 
    cout << "  " << array[i];
  }
  cout << "\n";
}

int main()
{
  int data[] = {-2, 45, 0, 11, -9};
  
    int j= sizeof(data) / sizeof(data[0]);
  
  bubbleSort(data,j);
  
  cout << "Sorted Array in Ascending Order:\n";  
  printArray(data,j);
}
