#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	srand(time(0));
	int a,b;
	int c;
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
			cout<<"Very good!"<<endl;
			break;
		}
		
		else
		cout<<"No. Please try again."<<endl;
	}

	return 0;
}
