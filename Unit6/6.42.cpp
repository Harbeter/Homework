#include<iostream>
#include<cmath>
using namespace std;
double distance(double x1,double y1,double x2,double y2)
{
	double s;
	s=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	return s;
}
int main()
{
	double x1,x2,y1,y2;
	cout<<"Enter x1,y1,x2,y2:";
	cin>>x1>>y1>>x2>>y2;
	double s=distance(x1,y1,x2,y2);
	cout<<"The distance is "<<s;
	return 0;
}
