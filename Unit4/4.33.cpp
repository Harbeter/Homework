#include<iostream>
using namespace std;
int main()
{
	double a,b,c;
	cin>>a>>b>>c;
	if(a+c>b||a+b>c||b+c>a)
	{
		if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b)
		{
			cout<<"They can be a right triangle"<<endl;
		}
		else
		{
			cout<<"NO! NO! NO!"<<endl;
		}
	}
	else
	{
		cout<<"NO! NO! NO!"<<endl;
	}
	return 0;
}
