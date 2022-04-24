#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int f1()
{
	int a=rand()%6+1;
	return a;
}
int main()
{
	srand(time(0));
	double bankBalance=1000,wager;
	char c='y';
	while(c=='y')
	{
		cout<<"You have "<<bankBalance<<"$ now!"<<endl;
		cout<<"Tell me how much do you want to bet:"<<endl;
		cin>>wager;
		while(wager>bankBalance)
		{
			cout<<"Enter wager < bankBalance!!"<<endl;
			cin>>wager;
		}
		int a=f1(),b=f1();
		cout<<"Your point:"<<a<<endl;
		cout<<"The stander point:"<<b<<endl;
		if(a>b)
		{
			cout<<"You Win!!"<<endl;
			bankBalance+=wager;
			cout<<"You have "<<bankBalance<<"$ now!"<<endl;
		}
		else
		{
			cout<<"You lose!!"<<endl;
			bankBalance-=wager;
			cout<<"You have "<<bankBalance<<"$ now!"<<endl;
		}
		if(bankBalance==0)
		{
			cout<<"You are poor!Get out!"<<endl;
			break;
		}
		else
		{
			cout<<"Do you want to try again?(y/n)?";
			
			cin>>c;
			if(c=='n')
			break;
		}
	}
	
	return 0;
}
