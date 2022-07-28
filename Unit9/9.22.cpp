#include<iostream>
#include<ctime>
using namespace std;
class Time
{
private:
	int year;
	int month;
	int day;
	int hour;
	int minute;
	int second;
public:	
	Time()
	{
		time_t now=time(0);
		tm to_tm=*localtime(&now);//localtime return a pointer
		year=1900+to_tm.tm_year;
		month=1+to_tm.tm_mon;
		day=to_tm.tm_mday;
		hour=to_tm.tm_hour;
		minute=to_tm.tm_min;
		second=to_tm.tm_sec;
	}

	void printTime()
	{
		cout<<year<<" "<<month<<" "<<day<<" "<<hour<<" "<<minute<<" "<<second<<endl;
	}
	void printSecond()
	{
		cout<<this->hour*3600+this->minute*60+this->second<<endl;
	}
	
};
int main()
{
	Time a;
	a.printTime();
	a.printSecond();
	return 0;
}
