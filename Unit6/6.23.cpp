#include<iostream>
using namespace std;
void s(int side,char f)
{
	for(int i=0;i<side;i++)
	{
		for(int j=0;j<side;j++)
		{
			cout<<f;
		}
		cout<<endl;
	}
}
int main()
{
	int side;
	char f;
	cin>>side>>f;
	s(side,f);
	return 0;
}
