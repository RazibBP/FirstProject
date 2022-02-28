#include<iostream>

using namespace std;

int main()
{
	char ch;
	cout << "Enter A Latter : ";
	cin >> ch;
	cout << endl;

	if (ch=='a' || ch =='u' || ch=='i' || ch=='e'|| ch=='o'){
		cout << "Vowel";

	}
	else {
		cout << "Consonant";
	}
	return 0;
}
