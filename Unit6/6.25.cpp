#include<iostream>
using namespace std;
int time(int h,int m,int s)
{
	int sum;
	sum=h*3600+m*60+s;
	return sum;
}
int main()
{
	int h,m,s;
	cout<<"Enter h,m,s pls:";
	cin>>h>>m>>s;
	cout<<time(h,m,s);
	return 0;
}
