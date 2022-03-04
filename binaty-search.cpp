#include<iostream>

using namespace std;

int main()
{
	int num[13]={ 3,5,7,8,9,10,24,36,48,52,63,78,80};
	int mid,data,l,r;

	cout << "Entr your data : ";
	cin >> data;
	cout << endl;

	
	l=0;
	r=12;

	while (l<=r)
	{
		mid= (l+r)/2;
	//	cout << mid;

		if (data==num[mid])
		{
			cout << "your result" << endl;		//	break;
		}

		else if (data>num[mid])
		{
			 l=mid+1;
		}

		else (data<num[mid]);
		{
			r=mid-1;
		}
		
	}
	return 0;

}
