#include<iostream>
#include<array>
using namespace std;
int main()
{
	array <int,20> a;
	bool flag=1;
	for(int i=0;i<20;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<20;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(a[j]==a[i])
			{
				flag=0;
				break;
			}
		}
		if(1==flag)
		{
			cout<<a[i]<<" ";
		}
		flag=1;
	}
	return 0;
}
