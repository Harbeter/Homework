#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	srand(time(0));
	int a,b;
	int c,d;
	d=rand()%4;
	a=rand()%9+1;
	b=rand()%9+1;
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	cout<<"How much is "<<a<<"times "<<b<<"?"<<endl;
	while(1)
	{
		cin>>c;
		if(a*b==c)
		{
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
			break;
			
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
		
	}

	return 0;
}
