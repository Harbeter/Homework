#include<iostream>
#include<array>
using namespace std;
int main()
{
	array<int,1000> a;
	a.fill(1);
	for(int i=2;i<a.size();i++)
	{
		if(a[i]==1)
		{
			for(int j=i+1;j<a.size();j++)
			{
				if(j%i==0)
				{
					a[j]=0;
				}
			}
		}
	}
	for(int i=2;i<a.size();i++)
	{
		if(a[i]==1)
		{
			cout<<i<<" ";
		}
	}
	return 0;
}
