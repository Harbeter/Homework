#include<iostream>
using namespace std;
void multiple(int a,int b)
{
	if(b%a==0)
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
	int a,b;
	cout<<"Enter a and b:"<<endl;
	cin>>a>>b;
	multiple(a,b);
	return 0;
}
