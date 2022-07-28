#include<iostream>
#include<array>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	int a,b;
	array<array<double,6>,6> s={0};
	srand(time(0));
	for(int i=0;i<36000;i++)
	{
		a=rand()%6+1;
		b=rand()%6+1;
		for(int i=0;i<6;i++)
		{
			for(int j=0;j<6;j++)
			{
				if(a==(i+1)&&b==(j+1))
				s[i][j]++;
			}
		}

	}
		for(int i=0;i<6;i++)
	{
		for(int j=0;j<6;j++)
		{
			cout<<s[i][j]<<"\t";
		}
		cout<<endl;
	}
	double m=0;
	for(int i=0;i<6;i++)
	{
		m=m+s[i][5-i];
	}
	cout<<m/36000<<endl;
	cout<<1.0/6.0;
	return 0;
}
