#include<iostream>
using namespace std;
int main()
{
	int arr[10],m;
	for(int i=0;i<=9;i++)
	{
		cin>>arr[i];
	}
	for(int j=1;j<=9;j++)
	{
		if(arr[j]>arr[0])
		{
			m=arr[j];
			arr[j]=arr[0];
			arr[0]=m;
		}
	}
	for(int j=2;j<=9;j++)
	{
		if(arr[j]>arr[1])
		{
			m=arr[j];
			arr[j]=arr[1];
			arr[1]=m;
		}
	}
	cout<<"The largest is:"<<arr[0]<<endl;
	cout<<"The second largest is:"<<arr[1]<<endl;
	return 0;
}
