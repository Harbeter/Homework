#include<iostream>
#include<stdexcept>
using namespace std;
class Rational
{
private:
	int numerator;//分子
	int denominator;//分母
public:
	explicit Rational(int n=0,int d=1); //默认实参构造函数要有关键字explicit，定义的时候不能有值 
	void add(Rational b);
	void reduce(Rational b);
	void multiply(Rational b);
	void divide(Rational b);
	void printStandard();
	void printFloat();
	void standard();
};
int main()
{
	Rational a(2,3);
	a.printStandard();
	a.printFloat();
	Rational b(3,4);
	a.multiply(b);
	a.printFloat();
	a.printStandard();
	Rational c(101,101*101);
	c.printStandard();
	return 0;
}

Rational::Rational(int n,int d)
{
	if(d!=0)
	{
		this->numerator=n;
		this->denominator=d;
		this->standard();
	}
	else
	{
		throw invalid_argument("Error:denominator!=0");
	}
}
void Rational::add(Rational b)
{
	int tempd=this->denominator*b.denominator;
	int tempn=this->numerator*b.denominator+b.numerator*this->denominator;
	this->standard();
}
void Rational::reduce(Rational b)
{
	int tempd=this->denominator*b.denominator;
	int tempn=this->numerator*b.denominator-b.numerator*this->denominator;
	this->standard();
}
void Rational::multiply(Rational b)
{
	this->numerator*=b.numerator;
	this->denominator*=b.denominator;
	this->standard();
}
void Rational::divide(Rational b)
{
	this->denominator*=b.numerator;
	this->numerator*=b.denominator;
}
void Rational::printStandard()
{
	cout<<this->numerator<<"/"<<this->denominator<<endl;
}
void Rational::printFloat()
{
	cout<<float(this->numerator)/float(this->denominator)<<endl;
}
void Rational::standard()
{
	int m,n;
	if(this->numerator>this->denominator)
	{
		m=this->numerator;
		n=this->denominator;
	}
	else
	{
		n=this->numerator;
		m=this->denominator;
	}
	int temp;
	while(n)//辗转相除法 
	{
		temp=m%n;
		m=n;
		n=temp;
	}
	this->denominator/=m;
	this->numerator/=m;
}
