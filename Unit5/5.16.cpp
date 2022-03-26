#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,p,n;
	for(int r=5;r<=10;r++)
	{
		cout<<"r="<<r<<"%"<<endl;
		cout<<"Year\t"<<"Amount on deposit"<<endl;
		for(int n=1;n<=10;n++)
		{
			cout<<n<<"\t\t"<<pow(100+r,n)/pow(100,n)*1000<<endl;
		}
		cout<<endl;
	}
	return 0;
}
