#include<iostream>
using namespace std;
int integerPower(int base,int exponent)
{
	int s=1;
	for(exponent;exponent>0;exponent--)
	{
		s*=base;
	}
	return s;
}
int main()
{
	cout<<integerPower(3,4)<<endl;
	return 0;
}
