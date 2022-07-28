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
	void printStandard();
	void printUniversal();
	void tick();
	int getHour();
	int getMinute();
	int getSecond();
};
class Date
{
private:
	int year;
	int month;
	int day;
public:
	explicit Date(int y=0,int m=0,int d=0);
	void nextDay();
	void printDate();
};
int main()
{
	Date a(2002,5,28);
	Time b(2,34,57); 
	int n=9999;
	while(n--)
	{
		b.tick();
		if(b.getHour()==0&&b.getMinute()==0&&b.getSecond()==0)
		{
			a.nextDay();
		}
		a.printDate();
		b.printStandard();
	}
	
	return 0;
}

Date::Date(int y,int m,int d)
{
	bool flag=0;
	if(y<0)
	{
		throw invalid_argument("Invaild argument!");
	}
	if(m>=1&&m<=12)
	{
		if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
		{
			if(d>=1&&d<=31)
			{
				flag=1;
			}
		}
		else if(m==2)
		{
			if(y%4==0&&y%100!=0||y%400==0)
			{
				if(d>=1&&d<=29)
				{
					flag=1;
				}
			}
			else
			{
				if(d>=1&&d<=28)
				{
					flag=1;
				}
			}
		}
		else
		{
			if(d>=1&&d<=30)
			{
				flag=1;
			}
		}
	}
	if(flag==1)
	{
		this->year=y;
		this->month=m;
		this->day=d;
	}
	else
	{
		throw invalid_argument("Invalid argument");
	}
}

void Date::nextDay()
{
	this->day+=1;
	//一个月有31天时 
	if(this->month==1||this->month==3||this->month==5||this->month==7||this->month==8||this->month==10||this->month==12)
	{
		if(this->day>31)
		{
			this->day=1;
			this->month+=1;
			if(this->month>12)
			{
				this->month=1;
				this->year+=1;
				return ;
			}
		}
	}
	//二月份时 
	else if(this->month==2)
	{
		//闰年时 
		if(this->year%4==0&&this->year%100!=0||this->year%400==0)
		{
			if(this->day>29)
			{
				this->day=1;
				this->month+=1;
				if(this->month>12)
				{
					this->month=1;
					this->year+=1;
					return ;
				}
			}
		}
		//平年时 
		else
		{
			if(this->day>28)
			{
				this->day=1;
				this->month+=1;
				if(this->month>12)
				{
					this->month=1;
					this->year+=1;
					return ;
				}
			}
		}
	}
	//其他月份时 
	else
	{
		if(this->day>30)
		{
			this->day=1;
			this->month+=1;
			if(this->month>12)
			{
				this->month=1;
				this->year+=1;
				return ;
			}
		}
	}
}
void Date::printDate()
{
	cout<<setfill('0')<<setw(4)<<this->year<<","<<setw(2)<<this->month<<","<<setw(2)<<this->day<<endl;
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
int Time::getHour()
{
	return this->hour;
}
int Time::getMinute()
{
	return this->getMinute();
}
int Time::getSecond()
{
	return this->getSecond();
}
