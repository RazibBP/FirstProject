#include<iostream>
using namespace std;

int main()
{
	int year;

	cout << "Enter any year : ";
	cin >> year;
	cout << endl;

	if (year%4==0 && year%100!=0){
		cout << "Leap Year";
	
	}
	else if (year%400==0){
		cout << "Leap Year";
	}
	else{
		cout << "Not a Leap Year";
	}
	return 0;
}
