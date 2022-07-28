#include<iostream>
#include<array>
using namespace std;
int recursiveMinimum(array<int,5> a,int n,int flag)
{
	if(n==flag)
	{
		return a[flag];
	}
	else
	{
		if(a[n]<a[flag])
		{
			int t=a[n];
			a[n]=a[flag];
			a[flag]=t;
		}
		recursiveMinimum(a,n+1,flag);
	}
}
int main()
{
	array<int,5> a={1,-2,-9,4,8};
	cout<<recursiveMinimum(a,0,a.size()-1);
	return 0;
}
