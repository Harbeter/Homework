#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long double s=24;
	for(double i=0.05;i<=0.1;i+=0.01)
	{
		cout<<"rate= "<<i*100<<"%"<<endl;
		for(int j=1;j<=387;j++)
		{
			s*=(1+i);
			cout<<"After "<<j<<" year(s)"<<s<<endl;
		}
		
	}
	return 0;
}
