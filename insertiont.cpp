#include<iostream>
using namespace std;

void iosertionarray(int array[] , int n){
	for (int i=0; i<n; i++)
	{
		cout << array[i] << " ";

	}
	cout << endl;
}

void iosertionsort(int array[] , int n){
	for (int i=1; i<n; i++){
		int tremp = array[i];
		int j = i-1;

		while (tremp < array[j] && j>0){
			array[j+1] = array[j];
			--j;
		}
		array[j+1] = tremp;
	}
}

int main(){
	int  data[]={12,34,56,21,35,75};

	int n=sizeof(data) / sizeof(data[0]);

	iosertionsort(data,n);

	iosertionarray(data,n);


}
