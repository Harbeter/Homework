#include<iostream>
using namespace std;
int main()
{
	int s,n,i,a[5];
	cin>>s;
	for(n=0;n<5;n++)
	{
		a[n]=s%10;
		s=s/10;
	}
	for(i=4;i>=0;i--)
	{
		cout<<a[i]<<"   ";
	}
	return 0;
 } 
