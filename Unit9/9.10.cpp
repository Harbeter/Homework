#include<iostream>
#include<stdexcept>
#include<iomanip>
using namespace std;
class Time
{
private:
	int hour;
	int minute;
	int second;
public:
	explicit Time(int h=0,int m=0,int s=0);
	void setTime(int h=0,int m=0,int s=0);
	void check();
	void print();
};
int main()
{
	Time a(5,59,38);
	a.print();
	a.setTime();
	a.print();
	return 0;
}
Time::Time(int h,int m,int s)
{
	this->check();
	this->hour=h;
	this->minute=m;
	this->second=s;
}
void Time::setTime(int h,int m,int s)
{
	this->check();
	this->hour=h;
	this->minute=m;
	this->second=s;
}
void Time::check()
{
	if(this->hour<0||this->hour>=24||this->minute<0||this->minute>=60||second<0||second>=60)
	{
		throw invalid_argument("Invalid argument");
	}
}
void Time::print()
{
	cout<<setfill('0')<<setw(2)<<this->hour<<":"<<setw(2)<<this->minute<<":"<<setw(2)<<this->second<<endl;
}
