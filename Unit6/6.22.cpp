#include<iostream>
using namespace std;
void s(int side)
{
	for(int i=0;i<side;i++)
	{
		for(int j=0;j<side;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
int main()
{
	int side;
	cin>>side;
	s(side);
	return 0;
}
