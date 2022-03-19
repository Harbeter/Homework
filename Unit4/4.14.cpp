#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int account=0;
	double begin,charges,credits,limit,newb;
	while(account!=1)
	{
		cout<<"Enter account number (or -1 to quit):";
		cin>>account;
		if(account==-1)
		{
			return 0;
		}
		cout<<"Enter beginning balance:";
		cin>>begin;
		cout<<"Enter total charges:";
		cin>>charges;
		cout<<"Enter total credits:";
		cin>>credits;
		cout<<"Enter credit limit:";
		cin>>limit;
		cout<<"New balance is "<<fixed<<setprecision(2)<<begin+charges-credits<<endl;
		if((begin+charges-credits)>limit)
		{
			cout<<"Account:\t"<<account<<endl;
			cout<<"Credit limit:\t"<<limit<<endl;
			cout<<"Balance:\t"<<fixed<<setprecision(2)<<begin+charges-credits<<endl;
			cout<<"Credit Limit Exceeeded."<<endl;
		}
		cout<<endl;
		
	}
	return 0;
}
