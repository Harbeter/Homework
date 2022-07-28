#include<iostream>
using namespace std;
class Complex
{
private:
	double realPart;
	double imaginaryPart;
public:
	Complex(double r=0,double i=0)
	{
		this->realPart=r;
		this->imaginaryPart=i;
	}
	void add(Complex &b)
	{
		this->realPart+=b.realPart;
		this->imaginaryPart+=b.imaginaryPart;
	}
	void reduce(Complex &b)
	{
		this->realPart-=b.realPart;
		this->imaginaryPart-=b.imaginaryPart;
	}
	void printComplex()
	{
		cout<<"("<<this->realPart<<","<<this->imaginaryPart<<")"<<endl;
	}
};
int main()
{
	Complex a(1,3);
	Complex b(2,5);
	a.add(b);
	a.printComplex();
	a.reduce(b);
	a.printComplex();
}
