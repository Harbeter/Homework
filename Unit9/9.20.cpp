#include<iostream>
using namespace std;
class SavingAccount
{
private:
	static double annualInterestRate;//仅仅是个声明 
	double savingsBalance;
public:
	
	double calculateMonthlyInterest();
	static void modifyInterestRate(double m);
	explicit SavingAccount(double m=0);
	static double getAnn();
	void setBalance(double s)
	{
		this->savingsBalance=s;
	}
	double getBalance()
	{
		return this->savingsBalance;
	}
};
double SavingAccount::annualInterestRate=0;//特别重要，如果没有这个定义初始化，则会报错。 
int main()
{
	SavingAccount::modifyInterestRate(0.03);
	SavingAccount saver1(2000);
	SavingAccount saver2(3000);
	cout<<saver1.calculateMonthlyInterest()<<endl;
	cout<<saver2.calculateMonthlyInterest()<<endl;
	SavingAccount::modifyInterestRate(0.04);
	saver1.setBalance(60+2000);
	saver2.setBalance((90+3000));
	cout<<saver1.calculateMonthlyInterest()<<endl;
	cout<<saver2.calculateMonthlyInterest()<<endl;
	cout<<saver1.getBalance()<<endl;
	cout<<saver2.getBalance()<<endl;
	
	
	return 0;
}
double SavingAccount::calculateMonthlyInterest()
{
	return this->savingsBalance*annualInterestRate/12;
}
void SavingAccount::modifyInterestRate(double m)
{
	annualInterestRate=m;
}
SavingAccount::SavingAccount(double m)
{
	this->savingsBalance=m;
}
double SavingAccount::getAnn()
{
	//savingsBalance++; 代码错误，静态成员函数只能通过类的对象来访问非静态成员数据 
	return annualInterestRate;
}
