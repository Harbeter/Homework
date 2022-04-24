#include<iostream>
#include<ctime>
#include<cstdlib>
#include<cmath>
using namespace std;
int main()
{
	srand(time(0));
	int a,b;
	int c,d;
	double e=0;
	double t=0;
	int f;
	cout<<"Enter the challenge level you want to try:"<<endl;
	cin>>f;
	int s=1;
	for(int i=0;i<f;i++)
	{
		s*=10;
	}
	cout<<"Enter the number of caculation:"<<endl;
	int m,n=0;
	int g;
	cin>>m;
	while(1)
	{
		
		if(m==5)
		{
			m=rand()%4+1;
			n=1;
		}
		switch(m)
		{
			case 1:
				g=a+b;
				break;
			case 2:
				g=a-b;
				break;
			case 3:
				g=a*b;
				break;
			case 4:
				g=a/b;
				break;
		}
		

		d=rand()%4;
		a=rand()%s+1;
		b=rand()%s+1;
		cout<<"a="<<a<<endl;
		cout<<"b="<<b<<endl;
		cout<<"How much is "<<a;
		if(m==1)
		cout<<"+";
		else if(m==2)
		cout<<"-";
		else if(m==3)
		cout<<"*";
		else if(m==4)
		cout<<"/";
		cout<<b<<"?"<<endl;
		if(n==1)
		{
			m=5;
		}
		cin>>c;
		
		if(g==c)
		{
			t++;
			switch(d)
			{
				case 0:
					cout<<"Very good!"<<endl;
					break;
				case 1:
					cout<<"Excellent!"<<endl;
					break;
				case 2:
					cout<<"Nice work!"<<endl;
					break;
				case 3:
					cout<<"Keep up the good work!"<<endl;
					break;
			}
			
			
		}
		
		else
		{
			switch(d)
			{
				case 0:
					cout<<"No.Please try again."<<endl;
					break;
				case 1:
					cout<<"Wrong.Try once more."<<endl;
					break;
				case 2:
					cout<<"Don't give up!"<<endl;
					break;
				case 3:
					cout<<"No.Keep trying."<<endl;
					break;
			}
		}
		e++;
		if(e==10)
		{
			if(t/e>=0.75)
			{
				cout<<"Congratulations,you are ready to go to the next level!"<<endl;
			}
			else
			{
				cout<<"Please ask your teacher for extra help."<<endl;
			}
			e=0;
			
			
		}
		
	}

	return 0;
}
