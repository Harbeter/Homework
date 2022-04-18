#include<iostream>
using namespace std;
void iseven(int a)
{
	if(a%2==0)
	{
		cout<<"true"<<endl;
	}
	else
	{
		cout<<"false"<<endl;
	}
}
int main()
{
	int a;
	while(1)
	{
		cin>>a;
		iseven(a);
	}
	return 0;
}
