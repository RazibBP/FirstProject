#include<iostream>

using namespace std;

int main ()
{
	void bubble_short(int a[5]={22,14,12,18,9} );
	

	int i,j,temp,n=5;

	for(i=0; i<n-1; i++)
	{
		for(j=0; j<n-1-i; j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
