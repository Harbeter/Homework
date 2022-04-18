#include<iostream>
using namespace std;
int power(double base,int exponent)
{
	int s;
	if(exponent==1)
	{
		s=base;
	}
	else
	{
		exponent--;
		s=base*power(base,exponent);
		
	}
	return s;
}
int main()
{
	double a;
	int b;
	cout<<"Enter a,b please:";
	cin>>a>>b;
	cout<<power(a,b);
	return 0;
}
