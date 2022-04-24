#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector <int> a;
	int i=0,n=0;
	int m;
	while(1)
	{
		cin>>m;
		a.push_back(m);
		for(int j=0;j<a.size();j++)
		{
			for(int i=0;i<j;i++)
			{
				if(a[i]==a[j])
				{
					n=1;
				}
			}
			
			
		}
		if(n==1)
		a.pop_back();
		if(a.size()==20)
		break;
		n=0;
	}
	for(int i=0;i<20;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
