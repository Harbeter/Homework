#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	int a=0,b=1,c;
	cout<<a<<endl;
	cout<<b<<endl;
	for(int i=0;i<10;i++)
	{
		c=a+b;
		cout<<c<<endl;
		a=b+c;
		cout<<a<<endl;
		b=a+c;
		cout<<b<<endl;
	}
	return 0;
}
