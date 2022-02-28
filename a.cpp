#include<iostream>

using namespace std;

int main()
{
	int marks;

	cout << "Enter Your marks: ";
	cin >> marks;
	cout << endl;

	if (marks>100){
		cout << "Invlid Marks";
	}
	else if (marks < 0){
	cout << "Invlid Marks";

	}
	else if (marks >=80){
		cout << "A+";
	}
	else if(marks >=70){
		cout << "A";
	}
	else if(marks >=60){
		cout << "A-";
	} 
	if(marks >=50){
		cout << "B";
	}
       	if(marks >=40){
		cout << "B-";
	} 
	if(marks >=33){
		cout << "F";
	} 
	return 0;
	

}
