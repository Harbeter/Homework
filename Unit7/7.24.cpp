#include<iostream>
#include<array>
#include<vector>
#include<cstdlib>
#include<ctime>
using namespace std;
int caculatesum(int &sum,int i,int j);
void Exclusion_number();
void set1(array<array<int,8>,8> &a,int i,int j);
void print(array<array<int,8>,8> &a);
int main()
{
	srand(time(0));
	
	
	int sumking=0;
	while(sumking!=8)
	{
		
		
		array<array<int,8>,8> a={};
		vector<pair<int,int>> rdmstep;
		//Exclusion_number();
		array<array<int,8>,8> b=
		{
			22,22,22,22,22,22,22,22,
			22,24,24,24,24,24,24,22,
			22,24,26,26,26,26,24,22,
			22,24,26,28,28,26,24,22,
			22,24,26,28,28,26,24,22,
			22,24,26,26,26,26,24,22,
			22,24,24,24,24,24,24,22,
			22,22,22,22,22,22,22,22
		};
		bool cando=1;
		sumking=0;
		while(cando)
		{
			rdmstep.clear();
			bool flag=0;
			int min=28;
			for(int i=0;i<8;i++)
			{
				for(int j=0;j<8;j++)
				{
					if(b[i][j]<=min&&a[i][j]==0)
					{
						min=b[i][j];
						flag=1;
					}
				}
			}
			if(flag)
			{
				for(int i=0;i<8;i++)
				{
					for(int j=0;j<8;j++)
					{
						if(b[i][j]==min&&a[i][j]==0)
						{
							rdmstep.push_back(make_pair(i,j));
						}
					}
				}
				int rdmt=rand()%rdmstep.size();
				cout<<rdmstep[rdmt].first<<" "<<rdmstep[rdmt].second<<endl;
				set1(a,rdmstep[rdmt].first,rdmstep[rdmt].second);
				print(a);
				sumking++;
			}
			else
			{
				cando=0;
			}
			
		}
		cout<<"sumking:"<<sumking<<endl;
	}
	return 0;
}

int caculatesum(int &sum,int i,int j)
{
	int ti=i;
	int tj=j;
	while(ti<8&&tj<8)
	{
		ti++;
		tj++;
		sum++;
	}
	ti=i,tj=j;
	while(ti>=0&&tj>=0)
	{
		ti--;
		tj--;
		sum++;
	}
	ti=i,tj=j;
	while(ti<8&&tj>=0)
	{
		ti++;
		tj--;
		sum++;
	}
	ti=i,tj=j;
	while(ti>=0&&tj<8)
	{
		ti--;
		tj++;
		sum++;
	}
	return sum;
}

void Exclusion_number()
{
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			int sum=11;
			cout<<caculatesum(sum,i,j)<<",";
		}
		cout<<endl;
	}
}
void set1(array<array<int,8>,8> &a,int i,int j)
{
	int ti=i;
	int tj=j;
	for(int ii=0;ii<8;ii++)
	{
		a[ii][j]=1;
	}
	for(int jj=0;jj<8;jj++)
	{
		a[i][jj]=1;
	}
	ti=i,tj=j;
	while(ti<8&&tj<8)
	{
		a[ti][tj]=1;
		ti++;
		tj++;
	}
	ti=i,tj=j;
	while(ti>=0&&tj>=0)
	{
		a[ti][tj]=1;
		ti--;
		tj--;
		
	}
	ti=i,tj=j;
	while(ti<8&&tj>=0)
	{
		a[ti][tj]=1;
		ti++;
		tj--;
		
	}
	ti=i,tj=j;
	while(ti>=0&&tj<8)
	{
		a[ti][tj]=1;
		ti--;
		tj++;
		
	}
}
void print(array<array<int,8>,8> &a)
{
	for(auto i:a)
	{
		for(auto j:i)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
}
