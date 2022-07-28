#include<iostream>
using namespace std;
void change(int *t)
{
	t+=5;
}
int main()
{
	int *p=0;
	int a=0;
	p=&a;
	cout<<p<<endl;
	change(p);
	cout<<p;
	return 0;
}
