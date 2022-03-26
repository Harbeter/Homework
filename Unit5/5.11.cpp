#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,p,n;
	for(double r=0.05;r<=0.1;r+=0.01)
	{
		cout<<"r="<<r*100<<"%"<<endl;
		cout<<"Year\t"<<"Amount on deposit"<<endl;
		for(int n=1;n<=10;n++)
		{
			cout<<n<<"\t\t"<<pow(1+r,n)*1000<<endl;
		}
		cout<<endl;
	}
	return 0;
}
