#include<iostream>
using namespace std;
int main()
{
	//���½� 
	int i,n,j;
	for(i=1;i<=9;i++)
	{
		for(n=1;n<=i;n++)
		{
			cout<<n<<"*"<<i<<"="<<n*i<<"\t";
		}
		cout<<endl;
	}
	cout<<endl;
	//���Ͻ�
	j=9;
	for(i=9;i>=1;i--)
	{
		for(n=1;n<=j;n++)
		{
			cout<<n<<"*"<<i<<"="<<n*i<<"\t";
		}
		j--;
		cout<<endl;
	}
	cout<<endl;
	//���½�
	for(i=1;i<=9;i++)
	{
		for(int s=9-i;s>=1;s--)
		{
				cout<<"\t";
		}
		for(n=1;n<=i;n++)
		{
			
			cout<<n<<"*"<<i<<"="<<n*i<<"\t";
		}
		cout<<endl;
	}
	cout<<endl;
	//���Ͻ�
	j=9;
	for(i=9;i>=1;i--)
	{
		for(int s=1;s<=9-i;s++)
		{
			cout<<"\t";
		}
		for(n=1;n<=j;n++)
		{
			cout<<n<<"*"<<i<<"="<<n*i<<"\t";
		}
		j--;
		cout<<endl;
	}
	cout<<endl;
	return 0;
}
