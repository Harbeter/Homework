#include<iostream>
using namespace std;
double circleArea(double R)
{
	const double pi=3.1415926;
	return pi*R*R;
}
int main()
{
	double R;
	cout<<"Enter R:";
	cin>>R;
	cout<<"The area of circle is:"<<circleArea(R)<<endl;
	return 0;
}
