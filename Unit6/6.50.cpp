#include<iostream>
using namespace std;
double f1(double a)
{
	a=a*3;
	return a;
}
double f2(double *a)
{
	*a=*a*3;
	return *a;
}
double f3(double &a)
{
	a=a*3;
	return a;
}
int main()
{
	double a;
	cin>>a;
	cout<<f1(a)<<endl;
	cout<<"a="<<a<<endl;
	cout<<f2(&a)<<endl;
	cout<<"a="<<a<<endl;
	cout<<f3(a)<<endl;
	return 0;
}
