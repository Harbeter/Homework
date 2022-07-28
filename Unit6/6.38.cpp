#include<iostream>
using namespace std;
void f1(int n,char x,char y,char z)
{
	if(n>0)
	{
		f1(n-1,x,z,y);
		cout<<x<<"->"<<z<<endl;
		f1(n-1,y,x,z);
	}
}
int main()
{
	char x='1',y='2',z='3';
	int n;
	cin>>n;
	int t=n;
	f1(n,x,y,z);
	return 0;
}
