#include<iostream>
using namespace std;
int main()
{
	int n;
	int m=999999999;
	cout<<"Enter n pls:"<<endl;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		
		if(arr[i]<m)
		{
			m=arr[i];
		}
	}
	cout<<"The least number is "<<m;
	return 0;
}
