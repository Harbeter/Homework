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
	while(1)
	{
		d=rand()%4;
		a=rand()%s+1;
		b=rand()%s+1;
		cout<<"a="<<a<<endl;
		cout<<"b="<<b<<endl;
		cout<<"How much is "<<a<<"times "<<b<<"?"<<endl;
		cin>>c;
		
		if(a*b==c)
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
