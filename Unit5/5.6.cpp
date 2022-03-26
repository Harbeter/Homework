#include<iostream>
using namespace std;
int main()
{
	double i=0,n,s=0;
	cout<<"Enter numbers pls:"<<endl;
	while(n!=9999)
	{
		cin>>n;
		if(n==9999)
		{
			break;
		}
		s+=n;
		i++;
	}
	double average=s/i;
	cout<<"The average of the numbers is "<<average<<endl;
	return 0;
}
