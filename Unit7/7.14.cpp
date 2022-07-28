#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector <int> a;
	int t=0;
	bool flag=1;
	for(int i=0;i<20;i++)
	{
		cin>>t;
		for(int j=0;j<i;j++)
		{
			if(a[j]==t)
			{
				flag=0;
				break;
			}
		}
		if(1==flag)
		{
			a.push_back(t);
		}
		flag=1;
	}
	
	for(auto i:a)
	{
		cout<<i<<" ";
	}
	return 0;
}
