#include<iostream>
using namespace std;
int main()
{
	int s=1;
	for(int i=1;i<=15;i++)
	{
		if(i%2==1)
		{
			s*=i;
		}
	}
	cout<<"The result is "<<s<<endl;
	return 0;
}
