#include<iostream>
#include<string>
using namespace std;
void Account();
int main()
{
	unsigned int accountNumber=23333;
	string firstName="harbeter";
	string lastName="green";
	double balance=52.00;
	Account(accountNumber,firstName,lastName,balance);
	return 0;
}
void Account(unsigned int accountNumber,string firstName,string lastName,double balance)
{
	
	cout<<accountNumber<<endl;
	cout<<firstName<<endl;
	cout<<lastName<<endl;
	cout<<balance<<endl;
}
