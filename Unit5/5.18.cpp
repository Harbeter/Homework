#include<iostream>
using namespace std;
int bin(int a)
{
	int arr[9];
	for(int i=0;i<9;i++)
	{
		arr[i]=a%2;
		a=a/2;
	}
	for(int i=8;i>=0;i--)
	{
		cout<<arr[i];
	}
	
}

int main()
{
	cout<<"dec\tbin\t\toct\thex"<<endl;
	
	for(int i=1;i<=256;i++)
	{
		cout<<dec<<i<<"\t";
		bin(i);
		cout<<"\t";
		cout<<oct<<i<<"\t";
		cout<<hex<<i<<"\t"<<endl;
	}
	return 0;
}
