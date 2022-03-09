#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter two integers pls:";
	int i,j;
	cin>>i>>j;
	if(i%j==0)
	cout<<"The first is "<<i/j<<" times larger than the second"<<endl;
	else
	cout<<"The first is not multiple of the second"<<endl;
	return 0;
}
