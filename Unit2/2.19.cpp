#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	int min,max;
	cout<<"Input three different integers: ";
	cin>>a>>b>>c;
	max=a;
	min=a;
	if(b>max)
	{
		max=b;
	}
	if(c>max)
	{
		max=c;
	}
	if(b<min)
	{
		min=b;
	}
	if(c<min)
	{
		min=c;
	}
	cout<<"Sum is "<<a+b+c<<endl;
	cout<<"Average is "<<(a+b+c)/3<<endl;
	cout<<"Product is "<<a*b*c<<endl;
	cout<<"Smallest is "<<min<<endl;
	cout<<"Largest is "<<max<<endl;
	return 0;
}
