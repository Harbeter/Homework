#include<iostream>
using namespace std;
int r(int a)
{
	int s=a%10;
	while(1)
	{
		a/=10;
		if(a==0)
		break;
		s=s*10+a%10;
		
	}
	return s;
}
int main()
{
	int a;
	cin>>a;
	cout<<r(a);
	return 0;
}
