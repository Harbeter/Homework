#include<iostream>
using namespace std;
int a(int x,int y)
{
	if(y==1)
		return x;
	else
	{	
		return x+a(x,y-1);
	}
}

int main()
{
	int x,y;
	cout<<"Enter x,y:"<<endl;
	cin>>x>>y;
	if(y<0)
	{
		y=-y;
		cout<<"-"<<a(x,y);
	}
	else
	cout<<a(x,y);
	return 0;
}
