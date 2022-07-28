#include<iostream>
#include<stdexcept>
#include<iomanip>
using namespace std;
class Date
{
private:
	int year;
	int month;
	int day;
public:
	explicit Date(int y=0,int m=0,int d=0);
	void nextDay();
	void printDate1();
	void printDate2();
};
int main()
{
	Date a(2002,5,28);
	a.printDate1();
	a.printDate2();
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
void Date::printDate1()
{
	cout<<setfill('0')<<setw(4)<<this->year<<","<<setw(2)<<this->month<<","<<setw(2)<<this->day<<endl;
}
void Date::printDate2()
{
	cout<<setfill('0')<<setw(2)<<this->month<<"/"<<setw(2)<<this->day<<"/"<<setw(2)<<this->year%100<<endl;
}

