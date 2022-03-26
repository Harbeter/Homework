#include<iostream>
using namespace std;
int main()
{
	int n,s=0;
	cout<<"Enter n pls:"<<endl;
	cin>>n;
	cout<<"Enter "<<n<<"numbers:"<<endl;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		s+=arr[i];
	}
	cout<<"The summary of the numbers is "<<s<<endl;
	return 0;
} 
