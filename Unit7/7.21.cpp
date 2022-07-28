#include<iostream>
#include<array>
using namespace std;
int main()
{
	array<array<int,4>,5> sales={0};
	int a,b,c;
	for(int i=0;i<120;i++)
	{
		cout<<"Enter your number:"<<endl;
		cin>>a;
		cout<<"Enter your goods number:"<<endl;
		cin>>b;
		cout<<"Enter the quality of the goods:"<<endl;
		cin>>c;
		for(int j=1;j<=4;j++)
		{
			if(j==a)
			{
				for(int k=1;k<=5;k++)
				{
					if(k==b)
					{
						sales[k-1][j-1]+=c;
					}
				}
			}
		}
	}
	cout<<"\tNo.1\tNo.2\tNo.3\tNo.4"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"No."<<i+1<<"\t";
		for(int j=0;j<4;j++)
		{
			cout<<sales[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	
	return 0;
}
