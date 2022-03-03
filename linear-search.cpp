#include<iostream>

using namespace std;

int main()
{
	int a[8]= { 80,65,75,82,45,55,43,23 };
	int n;


	cout << "Which data for search you : ";
	cin >> n;
	cout << endl;

	int data=0;

	for (int i=0; i<8; i++)
	{
		if(a[i]==n)
		{
			cout << "data found" << i;
			cout << endl;

			data++;
			break;
		}

	}
	if (data==0)
	{
		cout << "Data nor found";
		cout << endl;
	}
	return 0;


}
