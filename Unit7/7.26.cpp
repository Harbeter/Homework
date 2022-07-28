#include<iostream>
#include<array>
#include<vector>
#include<cstdlib>
#include<ctime>
using namespace std;
void print(array<array<int,8>,8> a);
void rdmlocation(int &x,int &y);

int main()
{	
	srand(time(0));
	for(int i=0;i<8;i++)
	{
	for(int j=0;j<8;j++)
	{
		
	
	
	bool move=1;
	bool flag=0;
	int sum=0;
	vector<int> rdmstep;
	//int x=0,y=0;
	int x=i,y=j;
	int ix=i,iy=j;
	//rdmlocation(x,y);//random initial location
	array<array<int,8>,8> a={};//checkboard
	//a[x][y]=1;
	//cout<<"x="<<x<<"y="<<y<<endl;
	array<array<int,8>,8> b=
	{
		2,3,4,4,4,4,3,2,
		3,4,6,6,6,6,4,3,
		4,6,8,8,8,8,6,4,
		4,6,8,8,8,8,6,4,
		4,6,8,8,8,8,6,4,
		4,6,8,8,8,8,6,4,
		3,4,6,6,6,6,4,3,
		2,3,4,4,4,4,3,2
	};
	int minrate=8;
	array<int,8> horizontal={2,1,-1,-2,-2,-1,1,2};
	array<int,8> vertical={-1,-2,-2,-1,1,2,2,1};
	//vector<int> canmovestep;
	while(move)
	{
		minrate=8;
		//look for the minrate
		for(int i=0;i<8;i++)
		{
			if((y+horizontal[i])>=0&&(y+horizontal[i])<8&&(x+vertical[i])>=0&&(x+vertical[i])<8)
			{
				if(a[x+vertical[i]][y+horizontal[i]]!=1)
				{
					if(b[x+vertical[i]][y+horizontal[i]]<minrate)
					{
						minrate=b[y+horizontal[i]][x+vertical[i]];
						flag=1;
					}
				}
			}
		}
		//cout<<"minrate="<<minrate<<endl;
		//look for the rdmstep
		for(int i=0;i<8;i++)
		{
			if((y+horizontal[i])>=0&&(y+horizontal[i])<8&&(x+vertical[i])>=0&&(x+vertical[i])<8)
			{
				if(a[x+vertical[i]][y+horizontal[i]]!=1)
				{
					if(b[x+vertical[i]][y+horizontal[i]]==minrate)
					{
						rdmstep.push_back(i);
					}
				}
			}
		}
		/*
		for(auto i:rdmstep)
		{
			cout<<i<<" ";
		}
		
		cout<<endl;
		*/
		if(1==flag)
		{
			int randomi=rand()%rdmstep.size();
			//print(a);
			y+=horizontal[rdmstep[randomi]];
			x+=vertical[rdmstep[randomi]];
			a[x][y]=1;
		}
		else
		{
			move=0;
		}
		sum++;
		flag=0;
		rdmstep.clear();
	}
	cout<<sum<<endl;
	if(64==sum)
	{
		if(x==ix&&y==iy)
		{
			cout<<"prefect!"<<endl;
		}
	}
	}//j
	}//i
	return 0;
}

void print(array<array<int,8>,8> a)
{
	for(auto i:a)
	{
		for(auto j:i)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
	cout<<"----------------------------"<<endl;
}

void rdmlocation(int &x,int &y)
{
	vector<pair<int,int>> rdmlocation;
	rdmlocation.push_back(make_pair(0,0));
	rdmlocation.push_back(make_pair(0,7));
	rdmlocation.push_back(make_pair(7,0));
	rdmlocation.push_back(make_pair(7,7));
	int rdmlocationp=rand()%4;
	x=rdmlocation[rdmlocationp].first;
	y=rdmlocation[rdmlocationp].second;
}
