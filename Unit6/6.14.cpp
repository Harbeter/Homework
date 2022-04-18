#include<iostream>
#include<cmath>
using namespace std;
void roundToInteger(double x)
{
	cout<<floor(x*1+0.5)<<endl;
}
void roundToTenths(double x)
{
	cout<<floor(x*10+0.5)/10<<endl;
}
void roundToHundredths(double x)
{
	cout<<floor(x*100+0.5)/100<<endl;
}
void roundToThousandths(double x)
{
	cout<<floor(x*1000+0.5)/1000<<endl;
}
int main()
{
	double x;
	cout<<"Enter x pls:"<<endl;
	cin>>x;
	cout<<"Result:"<<endl;
	cout<<x<<endl;
	roundToInteger(x);
	roundToTenths(x);
	roundToHundredths(x);
	roundToThousandths(x);
	return 0;
}
