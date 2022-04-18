#include<iostream>
#include<cmath>
using namespace std;
int p1(int a)
{
	int s=1;
	for(int i=2;i<=a/2;i++)
	{
		if(a%i==0)
		{
			s=0;
		}
	}
	return s;
}
int p2(int a)
{
	int s=1;
	for(int i=2;i<=sqrt(a);i++)
	{
		if(a%i==0)
		{
			s=0;
		}
	}
	return s;
}

int main()
{
	for(int i=2;i<=10000;i++)
	{
		if(p1(i)==1)
		{
			cout<<i<<endl;
			n++;
		}
	}
	cout<<endl;
	for(int i=2;i<=10000;i++)
	{
		if(p2(i)==1)
		{
			cout<<i<<endl;
			n++;
		}
	}
	return 0;
}
