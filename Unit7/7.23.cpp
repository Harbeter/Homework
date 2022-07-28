#include<iostream>
#include<array>
#include<vector>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	srand(time(0));
	int sum=0;
	while(sum!=63)
	{
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			
	
	bool flag=0;
	bool move=1;
	
	array<int,8> horizontal={2,1,-1,-2,-2,-1,1,2};
	array<int,8> vertical={-1,-2,-2,-1,1,2,2,1};
	array<array<int,8>,8> a={};
	int x=i,y=j;
	a[i][j]=1;
	vector<int> rdmstep;
	while(move)
	{
		flag=0;
		rdmstep.clear();
		for(int i=0;i<8;i++)
		{
			if((y+horizontal[i])>=0&&(y+horizontal[i])<8&&(x+vertical[i])>=0&&(x+vertical[i])<8)
			{
				if(a[x+vertical[i]][y+horizontal[i]]!=1)
				{
					flag=1;
					rdmstep.push_back(i);
				}
			}
		}
		if(1==flag)
		{
			int ti=rand()%rdmstep.size();
			x+=vertical[rdmstep[ti]];
			y+=horizontal[rdmstep[ti]];
			a[x][y]=1;
			sum++;
		}
		else
		{
			move=0;
		}
	}
	cout<<"sum:"<<sum;
	sum=0;
		}
	}
	
	}
	return 0;
}
