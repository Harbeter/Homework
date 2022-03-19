#include<iostream>
using namespace std;
int main()
{
	//a
	int x,y,z;
	cout<<"enter x,y pls."<<endl;
	cin>>x>>y;
	z=x+y;
	x++;
	cout<<"z="<<z<<" "<<"x="<<x<<endl;
	
	//b
	int count;
	cout<<"enter count pls."<<endl;
	cin>>count;
	if(count>10)
	{
		cout<<"Count is greater than 10."<<endl;
	}
	//c
	x=0;
	int total=10;
	cout<<"x=0  total=10"<<endl;
	x--; 
	total=total-x;
	cout<<x<<"  "<<total<<endl;
	
	//d
	int q,divisor;
	cout<<"enter q,divisor pls"<<endl;
	cin>>q>>divisor;
	q=divisor%q;
	cout<<q<<endl;
	cout<<"enter q,divisor pls"<<endl;
	divisor%=q;
	q=divisor;
	cout<<q<<endl;
	
	return 0;
} 
