#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int num1,num2;

	cout << showpoint;
	cout << fixed;
	cout << setprecision(2);
	
	cout<< "Please Enter Two Namber :";
	cin >> num1 >> num2;

	int sum=num1+num2;
	cout <<setw(15) << "Your Result= "<<sum;
	cout << endl;

	int sub=num1-num2;
	cout << "Your Result= " << sub;
	cout << endl;
	
	cout << noshowpoint;

	double div= (float) num1 / num2;
	cout << "Divistion no :" <<div;
	cout << endl;

	int  vib= num1 * num2;
	cout << "Miltiplision no: " <<vib;
	cout << endl;

	int rim=num1 % num2;
	cout << "Remainder no : "<< rim;
	cout << endl;

	return 0;
}
