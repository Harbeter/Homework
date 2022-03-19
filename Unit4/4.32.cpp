#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(a+c>b||a+b>c||b+c>a)
	{
		cout<<"They can be a triangle"<<endl;
	}
	else
	{
		cout<<"NO! NO! NO!"<<endl;
	}
	return 0;
}
