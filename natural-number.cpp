//1+2+3+......+n

#include<iostream>
using namespace std;

int main ()
	
{
	int n,sum=0;

	cout << "Enter a last number :";
	cin >> n;
	cout << endl;

	for (int i=1; i<=n; i=i+1)
	{
		sum = sum+i;
	}
	cout << "Your answer :" << sum;
	cout << endl;

	return 0;
}
