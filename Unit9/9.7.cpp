#include<iostream>
#include<iomanip>
#include<stdexcept>
using namespace std;
class Time
{
private:
	int hour;
	int minute;
	int second;
public:
	explicit Time(int h=0,int m=0,int s=0);
	void printStandard();
	void printUniversal();
	void tick();
};
int main()
{
	Time a(0,0,0);
	int n=3600;
	while(n--)
	{
		a.tick();
		a.printStandard();
		a.printUniversal();
	}
	
	
	return 0;
}
Time::Time(int h,int m,int s)
{
	if(h>=0&&h<24&&m>=0&&m<60&&s>=0&&s<60)
	{
		this->hour=h;
		this->minute=m;
		this->second=s;
	}
	else
	{
		throw invalid_argument("Invalid argument");
	}
	
}
void Time::printStandard()
{
	int h=this->hour%12;
	cout<<setfill('0')<<setw(2)<<h<<":"<<setw(2)<<minute<<":"<<setw(2)<<second;
	if(h>12)
	{
		cout<<"PM"<<endl;
	}
	else
	{
		cout<<"AM"<<endl;
	}
}
void Time::printUniversal()
{
	cout<<setfill('0')<<setw(2)<<hour<<":"<<setw(2)<<minute<<":"<<setw(2)<<second<<endl;
}
void Time::tick()
{
	this->second+=1;
	if(this->second==60)
	{
		this->second=0;
		this->minute+=1;
	}
	if(this->minute==60)
	{
		this->minute=0;
		this->hour+=1;
	}
	if(this->hour==24)
	{
		this->hour=0;
	}
}
