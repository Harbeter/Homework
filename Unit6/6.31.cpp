#include<iostream>
using namespace std;
int gcd(int a,int b)
{
	int s;
	int n;
	a>b?n=a:n=b;
	for(int i=1;i<=n;i++)
	{
		if(a%i==0&&b%i==0)
		{
			s=i;
		}
	}
	return s;
}
int main()
{
	int a,b;
	cout<<"Enter two numbers:";
	cin>>a>>b;
	cout<<"Result:"<<gcd(a,b);
	return 0;
}
