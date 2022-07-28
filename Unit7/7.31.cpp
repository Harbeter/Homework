#include<iostream>
using namespace std;
void stringReverse(string a,int n)
{
	if(n==0)
	{
		cout<<a[0];
		return ;
	}
	else
	{
		cout<<a[n];
		stringReverse(a,n-1);
	}
}
int main()
{
	string a;
	getline(cin,a);
	stringReverse(a,a.size()-1);
	return 0;
}
