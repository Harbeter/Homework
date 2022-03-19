#include<iostream>
using namespace std;
int main()
{
	unsigned int x,y;
	cin>>x; //a
	cin>>y; //b
	unsigned int i=1; //c
	unsigned int power=1; //d
	power*=x; //e
	++i; //f
	if(i<=y) //g
	cout<<power; //h
	return 0;
	
}
