#include<iostream>
using namespace std;
double min(double a,double b,double c)
{
	double m=a;
	if(b<m)
	m=b;
	else if(c<m)
	m=c;
	return m;
}
int main()
{
	double a,b,c;
	cout<<"Enter three numbers please:"<<endl;
	cin>>a>>b>>c;
	cout<<"The min is:"<<min(a,b,c);
	return 0;
}
