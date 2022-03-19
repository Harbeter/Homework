#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double miles=0,gallons,sum1=0,sum2=0;
	while(miles!=-1)
	{
		cout<<"Enter miles driven(-1 to quit):";
		cin>>miles;
		if(miles==-1)
		{
			return 0;
		}
		cout<<"Enter gallons used:";
		cin>>gallons;
		cout<<"MPG this trip:"<<fixed<<setprecision(6)<<miles/gallons<<endl;
		sum1+=miles;//The sum of miles
		sum2+=gallons;//The sum of gallons
		cout<<"Total MPG:"<<fixed<<setprecision(6)<<sum1/sum2<<endl;
		cout<<endl;
	}
	
	
	return 0;
}
