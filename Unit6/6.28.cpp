#include<iostream>
using namespace std;
void isperfect(int a)
{
	int s=0;
	for(int i=1;i<a;i++)
	{
		if(a%i==0)
		{
			s+=i;
		}
	}
	if(s==a)
	{
		cout<<a<<endl;
	}
}
int main()
{
	for(int i=1;i<=1000;i++)
	{
		isperfect(i);
	}
	return 0;
}
