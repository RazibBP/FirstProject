#include<iostream>

using namespace std;

int main()
{
	int sum=0,n;

	cout << "Enter Type a last number :";
	cin >> n;
	cout << endl;

	for (int i=0; i<=n; i=i+2)
	{
		sum=sum+i;
	}
	cout << "your answer : " << sum;
	cout << endl;

	return 0;
}
