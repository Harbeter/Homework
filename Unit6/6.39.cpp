#include<iostream>
using namespace std;
void f1(int a,int b,int c,int d)
{
	for(int i=a;i>1;i--)
	{
		cout<<b<<"->"<<d<<endl;
	}
	cout<<b<<"->"<<c<<endl;
	for(int i=a;i>1;i--)
	{
		cout<<d<<"->"<<c<<endl;
	}

}
int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	f1(a,b,c,d);
	return 0;
}
