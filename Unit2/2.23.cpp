#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int i,n;
	int min,max;
	for(i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	max=min=arr[0];
	for(n=0;n<5;n++)
	{
		if(arr[n]>max)
		{
			max=arr[n];
		}
		if(arr[n]<min)
		{
			min=arr[n];
		}
	}
	cout<<"Max="<<max<<endl<<"Min="<<min<<endl;
	return 0;
} 
