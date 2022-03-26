#include<iostream>
using namespace std;
int main()
{
	//a
	cout<<"(a)"<<endl;
	for(int i=1;i<=10;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	//b
	cout<<"(b)"<<endl;
	for(int i=10;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	//c
	cout<<"(c)"<<endl;
	for(int i=10;i>=1;i--)
	{
		for(int n=0;n<10-i;n++)
		{
			cout<<" ";
		}
		for(int j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	//d
	cout<<"(d)"<<endl;
	for(int i=10;i>=1;i--)
	{
		for(int n=0;n<i;n++)
		{
			cout<<" ";
		}
		for(int j=0;j<=10-i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
