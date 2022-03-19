#include<iostream>
using namespace std;
int main()
{
	unsigned int x,y;
	cout<<"Enter x,y pls"<<endl;
	cin>>x>>y;
	unsigned int m=x;
	while(y>1)
	{
		x*=m;
		y--;
	}
	cout<<x<<endl;
	return 0;
}
