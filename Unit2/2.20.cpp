#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter the radius of the circle:";
	double r,d,c,s;
	cin>>r;
	double pi=3.14159;
	d=r*2;
	c=2*pi*r;
	s=pi*r*r;
	cout<<"The diameter of the circle is "<<d<<endl;
	cout<<"The circumference of the circle is "<<c<<endl;
	cout<<"The area of the circle is "<<s<<endl;
	return 0;
} 
