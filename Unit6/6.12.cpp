#include<iostream>
#include<iomanip>
using namespace std;
double calculateCharges(double n)
{
	double s=0;
	if(n<=3)
	s=2.00;
	else
	{
		s=2.00;
		n=n-3;
		while(n>=1)
		{
			n-=1;
			s+=0.5;
		}
		if(n!=0)
		s+=0.5;
		if(s>10)
		s=10;
	}
	return s;
}
int main()
{
	double a,b,c;
	cout<<"Enter the first data:"<<endl;
	cin>>a;
	cout<<"Enter the second data:"<<endl;
	cin>>b;
	cout<<"Enter the third data:"<<endl;
	cin>>c;
	cout<<"Car\t"<<"Hours\t"<<"Charge\t"<<endl;
	cout<<"1\t"<<fixed<<setprecision(1)<<setiosflags(ios::right)<<setw(5)<<a<<"\t"<<fixed<<setprecision(2)<<setiosflags(ios::right)<<setw(6)<<calculateCharges(a)<<endl;
	cout<<"2\t"<<fixed<<setprecision(1)<<setiosflags(ios::right)<<setw(5)<<b<<"\t"<<fixed<<setprecision(2)<<setiosflags(ios::right)<<setw(6)<<calculateCharges(b)<<endl;
	cout<<"3\t"<<fixed<<setprecision(1)<<setiosflags(ios::right)<<setw(5)<<c<<"\t"<<fixed<<setprecision(2)<<setiosflags(ios::right)<<setw(6)<<calculateCharges(c)<<endl;
	cout<<"TOTAL\t"<<fixed<<setprecision(1)<<setiosflags(ios::right)<<setw(5)<<a+b+c<<"\t"<<fixed<<setprecision(2)<<setiosflags(ios::right)<<setw(6)<<calculateCharges(a)+calculateCharges(b)+calculateCharges(c);
	return 0;
}
