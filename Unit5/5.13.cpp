#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter n pls"<<endl;
	for(int i=1;i<=5;i++)
	{
		cin>>n;
		for(int j=1;j<=n;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
