#include<iostream>
using namespace std;


void bobblesort(int array[] , int j)
{
	for(int a=0; a<j; a++)
	{
		for(int i=0; i<j-a; i++)
		{
			if(array[i] > array[i+1])
			{
				int tremp = array[i];
				array[i] = array[i+1];
				array[i+1] = tremp;
			}
		}
	}
}
void bobblearray(int  array[],int j)

{
	for(int i=0; i<j; i++)
	{
		cout << " " << array[i];

	}
	cout << endl;
}

int main()
{
	int data[]={23,13,24,53,52,56,73,24,9};

	int j=sizeof(data) / sizeof(data[0]);
	
	bobblesort(data,j);

	cout << "sort in array accending order : ";
	bobblearray(data,  j);

}
