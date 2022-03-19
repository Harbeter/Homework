#include<iostream>
using namespace std;
int main()
{
	int x=5,product=5,quotient=5;
	product*=x++;
	cout<<product<<" "<<x<<endl;
	x=5;
	quotient/=++x;
	cout<<quotient<<" "<<x<<endl;
	return 0;
}
