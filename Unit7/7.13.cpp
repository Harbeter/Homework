#include<iostream>
#include<array>
using namespace std;
int main()
{
	array <int,20> a;
	int i=0,n=0;
	while(1)
	{
		cin>>a[i];
		for(int j=0;j<i;j++)
		{
			if(a[i]==a[j])
			{
				n=1;
			}
			
		}
		if(n==0)
		i++;
		if(i==20)
		break;
		n=0;
	}
	for(int i=0;i<20;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
