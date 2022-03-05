#include<iostream>

using namespace std;

void boubblesort(int array[],int j)

{

  for(int a=0; a<j; a++)
  {
    for(int i=0; i<j-a; i++)
    {
	if(array[i]>array[i+1])
	{
       	 int tremp=array[i];
	 array[i]=array[i+1];
	 array[i+1]=tremp;
	}
    }
  }
}


void boubblearray(int array[],int j)
{
	for(int i=0; i<j; i++)
	{
		cout << " " << array[i];
	}
	cout << "\n";
}

int main()
{
	int data[]={22,14,12,18,9};

	int j=sizeof(data) / sizeof(data[0]);
	
	boubblesort(data,j);
	
	cout << "Short array in accending order : ";
	boubblearray(data,j);
}






		

