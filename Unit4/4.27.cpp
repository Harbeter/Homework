#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,sum=0;
	cout<<"Enter a binary number pls:";
	cin>>a;
	sum=a%10+a/10%10*2+a/100%10*4+a/1000%10*8+a/10000%10*16+a/100000%10*32+a/1000000%10*64+a/10000000%10*128;
	cout<<"Decimal number is:"<<sum;
	return 0;
}
