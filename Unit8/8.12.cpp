#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>
using namespace std;
int runway[77]={};
void action();
void moveTortoise(int *T);
void moveHara(int *H);
void print();
void exchangePosition(int *T,int *H);
void clean();
void win(int T,int H);
int main()
{
	srand(time(0));
	int T=1;
	int H=1;
	action();
	while(T<70&&H<70)
	{
		clean();
		moveTortoise(&T);
		moveHara(&H);
		exchangePosition(&T,&H);
		print();
	}
	win(T,H);
	

	return 0;
}

void action()
{
	cout<<"BANG!!!!!"<<endl;
	cout<<"AND THEY'RE OFF!!!!!"<<endl;
}

void moveTortoise(int *T)
{
	int temp=rand()%10+1;
	if(temp<=5&&temp>=1)
	{
		*T+=3;
		if(*T>70)
		{
			*T=70;
		}
	}
	else if(temp>=6&&temp<=7)
	{
		*T-=6;
		if(*T<1)
		{
			*T=1;
		}
	}
	else
	{
		*T+=1;
	}
}
void moveHara(int *H)
{
	int temp=rand()%10+1;
	if(temp>=3&&temp<=4)
	{
		*H+=9;
		if(*H>70)
		{
			*H=70;
		}
	}
	else if(temp==5)
	{
		*H-=12;
		if(*H<1)
		{
			*H=1;
		}
	}
	else if(temp>=6&&temp<=8)
	{
		*H+=1;
	}
	else if(temp>=9&&temp<=10)
	{
		*H-=2;
		if(*H<1)
		{
			*H=1;
		}
	}
	
}
void print()
{
	for(int i=1;i<77;i++)
	{
		cout<<char(runway[i]);
	}
	cout<<endl;
	cout<<endl;
}
void exchangePosition(int *T,int *H)
{
	if(*T!=*H)
	{
		runway[*T]=int('T');
		runway[*H]=int('H');
	}
	else
	{
		runway[*T]=int('O');
		runway[*T+1]=int('U');
		runway[*T+2]=int('C');
		runway[*T+3]=int('H');
		runway[*T+4]=int('!');
		runway[*T+5]=int('!');
		runway[*T+6]=int('!');
	}
	
}
void clean()
{
	for(int i=1;i<77;i++)
	{
		runway[i]=int(' ');
	}
}
void win(int T,int H)
{
	if(70==H&&70==T)
	{
		cout<<"peace"<<endl;
	}
	if(70==T)
	{
		cout<<"TORTOISE WINS!!! YAY!!!"<<endl;
	}
	else if(70==H)
	{
		cout<<"Hara wins.Yuch."<<endl;
	}
}
