#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
double hypotenuse(double a,double b)
{
	double c;
	c=sqrt(a*a+b*b);
	return c;
}
int main()
{
	double a,b;
	a=3.0,b=4.0;
	cout<<fixed<<setprecision(1)<<hypotenuse(a,b)<<endl;
	a=5.0,b=12.0;
	cout<<fixed<<setprecision(1)<<hypotenuse(a,b)<<endl;
	a=8.0,b=15.0;
	cout<<fixed<<setprecision(1)<<hypotenuse(a,b)<<endl;
	return 0;
}
