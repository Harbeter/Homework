#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double sales,salary;
	while(sales!=-1)
	{
		cout<<"Enter sales in dollars (-1 to end):";
		cin>>sales;
		if(sales==-1)
		{
			return 0;
		}
		cout<<"Salary is: $";
		cout<<fixed<<setprecision(2)<<200+sales*0.09<<endl;
		cout<<endl;
	}
	return 0;
}
