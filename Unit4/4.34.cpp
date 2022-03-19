#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	//a
	int n,m,s=1;
	cin>>n;
	if(n==0)
	{
		cout<<"0!=1"<<endl;
	}
	else
	{
		m=n;
		while(n>1)
		{
			s*=n;
			n--;
		}
		cout<<m<<"!="<<s<<endl;
	}
	//b
	int b,c;
	double e=1,d=1;
	cout<<"Enter precision pls: ";
	cin>>b;
	if(b==1)
	{
		e=1;
	}
	while(b>=1)
	{
		c=b;
		while(c>=1)
		{
			d*=c;//d为单个数阶乘 
			c--;
		}
		e+=1/d;
		d=1;
		b--;
	}
	cout<<"e="<<e<<endl;
	//c
	int x;
	b=0;c=0;
	e=1;d=1;
	cout<<"Enter precision pls: ";
	cin>>b;
	cout<<"Enter x pls: ";
	cin>>x;
	if(b==1)
	{
		e=1;
	}
	while(b>=1)
	{
		c=b;
		while(c>=1)
		{
			d*=c;//d为单个数阶乘 
			c--;
		}
		e+=pow(x,b)/d;
		d=1;
		b--;
	}
	cout<<"e="<<e<<endl;
	return 0;
}
