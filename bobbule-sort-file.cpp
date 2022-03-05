#include<iostream>
using namespace std;

void bobblesort(int b[], int j)
{
	for(int a=0; a<j; a++)
	{
		for(int i=0; i<j-a; i++)
		{
			if(b[i] > b[i+1])
			{
				int tremp = b[i];
				b[i] = b[i+1];
				b[i+1] = tremp;


			}
		}
	}
}



void bobblearray(int b[], int j)
{
	for (int i=0; i<j; i++)
	{
		cout << " " << b[i];
	}
	cout << endl;
}

int main()
{
	int data[]={24,25,28,27,13,9};
	int j=sizeof(data) / sizeof(data[0]);

	bobblesort(data,j);

	cout << "sort array in accending order : ";
	bobblearray(data,j);

}
