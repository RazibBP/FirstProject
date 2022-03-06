#include<iostream>
using namespace std;

void insertionsort(int a[] , int n)
{
	for(int i=0; i<n; i++)
	{
		int tremp=a[i];

		int j = i-1;

		while(j>=0 && a[i] > tremp)
		{
			a[j+1]=tremp;
			j--;
		}
		a[j+1]=tremp;
	}
}

void insertionarray(int  a[] , int n)
{
	for (int i=0; i<n; i++)
	{
		cout << " " << a[i];
	}
	cout << endl;
}

int main()
{
	int a[]={43,27,29,31,12};
	int n=sizeof(a) / sizeof(a[0]);

	insertionsort(a,n);

	insertionarray(a,n);



}

