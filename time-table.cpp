#include<iostream>
using namespace std;

int main()
{
	int num,i;

	cout << "Enter type a number : ";
	cin >> num;
	cout << endl;

	for (i=1; i<=10; i++)
	{
		cout << num << "x" << i << "=" << num*i;
		cout << endl;
	}
	return 0;
}
