#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cout<<"*";
	}
	cout<<endl;
	for(int j=1;j<=n-2;j++)
	{
		cout<<"*";
		for(int s=1;s<=n-2;s++)
		{
			cout<<" ";
		}
		cout<<"*"<<endl;
	}
	for(int i=1;i<=n;i++)
	{
		cout<<"*";
	}
	cout<<endl;
	return 0;
}
