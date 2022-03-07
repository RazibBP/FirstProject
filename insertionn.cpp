#include<iostream>

using namespace std;

void insertionarray(int  array[] , int n)
{
	for (int i=0; i<n; i++)
	{
		cout << array[i] << " " ;
	}
	cout << endl;
}

void insertionsort(int array[] , int n)
{
	for(int i=1; i<n; i++)
	{
		int tremp = array[i];
		int j = i - 1;
		
		while (tremp < array[i] && j>=0)
		{
			array[j + 1] = array[j];

			--j;
		}	
		array[j + 1] = tremp;
	}
}


int main ()

{
	int  data[]={ 12,3,5,6,2,54,7};
	int n=sizeof(data) / sizeof(data[0]);

	insertionsort(data,n);

	insertionarray(data,n);


}
