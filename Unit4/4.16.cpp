#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double hours,rate,salary;
	while(hours!=-1)
	{
		cout<<"Enter hours worked (-1 to end):";
		cin>>hours;
		if(hours==-1)
		{
			return 0;
		}
		cout<<"Enter hourly rate of the employee($00.00):";
		cin>>rate;
		if(hours<=40)
		{
			salary=hours*rate;
		}
		else
		{
			salary=40*rate+(hours-40)*rate*3/2;
		}
		cout<<"Salary is: $"<<fixed<<setprecision(2)<<salary<<endl;
		cout<<endl;
	}
	return 0;
}
