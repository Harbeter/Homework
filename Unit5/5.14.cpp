#include<iostream>
using namespace std;
int main()
{
	double a,n;
	int b;
	cout<<"Enter n pls:"<<endl;
	cin>>b;
	switch(b)
	{
		case 1:
			n=2.98;
			break;
		case 2:
			n=4.50;
			break;
		case 3:
			n=9.98;
			break;
		case 4:
			n=4.49;
			break;
		case 5:
			n=6.87;
			break;
	}
	cout<<"Enter the price pls:"<<endl;
	cin>>a;
	cout<<"The result is: "<<n*a<<endl;
	return 0;
}
