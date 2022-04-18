#include<iostream>
using namespace std;
double celsius(double a)
{
	double s;
	s=(a-32)/1.8;
	return s;
}
double fahrenheit(double a)
{
	double s;
	s=32+a*1.8;
	return s;
}
int main()
{
	cout<<"¡æ->¨H"<<endl;
	for(double i=0;i<=100;i++)
	{
		cout<<i<<"\t"<<fahrenheit(i)<<endl;
	}
	cout<<endl;
	cout<<"¨H->¡æ"<<endl;
	for(double i=32;i<=212;i++)
	{
		cout<<i<<"\t"<<celsius(i)<<endl;
	}
	return 0;
}
