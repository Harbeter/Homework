#include<iostream>
using namespace std;
int qualityPoints(int a)
{
	if(a>=90&&a<=100)
	return 4;
	else if(a>=80)
	return 3;
	else if(a>=70)
	return 2;
	else if(a>=60)
	return 1;
	else
	return 0;
}
int main()
{
	int a;
	cout<<"Enter a please:";
	cin>>a;
	cout<<qualityPoints(a);
	return 0;
}
