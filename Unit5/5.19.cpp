#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double p=0;
	for(double i=1;i<=1000;i++)
	{
		p+=4/(2*i-1)*pow(-1,i+1);
		cout<<i<<":"<<"¦°="<<p<<endl;
	}
	return 0;
}
