#include<iostream>

using namespace std; 

void quicksort(int a[] , int l , int h)
{
	int pivot=a[l];
	int i=l;
	int j=h;

	while(i<j)
	{
		while (a[i] <pivot)
		{
		i++;
		}
		while(a[j] > pivot)
		{
		j--;
		}
		if(i<j)
		{
		swap (a[i] , a[j]);
		}
	}
	swap(a[l] , a[j]);

}

void quickarray(int a[] , int l , int h)
{
	for(int i=0; i<h; i++)
	{
		cout << a[i] << " ";
	}	

	
}

int main()
{
	int data[]={9,3,11,15,14,20,2,24,30,1,35};

	int l=0,h=11;

	quicksort(data,l,h);

	quickarray(data,l,h);
}
