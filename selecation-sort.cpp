#include<iostream>

using namespace std;

void selationsort(int array[] , int n)
{
	for(int i=0; i<n-1; i++)
	{
		int min=i;
		for (int j=i+1; j<n; j++)
		{
			if (array[j] < array[min])
			{
				min = j ;
			}
		}
		if (min !=i)
		{
			int tremp = array[i];
			array[i] = array[min];
			array[min] = tremp;
		}
	}
}

void selationarray(int array[] , int n)
{
	for(int i=0; i<n; i++)
	{
		cout << array[i] << " " ;

	}
	cout << endl;
}

int main()
{
	int data[]={4,2,5,3,8,6,9};

	int n=sizeof(data) / sizeof(data[0]);

	selationsort(data,n);
	

	selationarray(data,n);
}
