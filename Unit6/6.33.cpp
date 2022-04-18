#include<iostream>
#include<ctime>
int flip()
{
	return rand()%2;
}
using namespace std;
int main()
{
	srand(time(0));
	int a=0,b=0;
	for(int i=0;i<100;i++)
	{
		if(flip()==1)
		a++;
		else
		b++;
	}
	cout<<"Head:"<<a<<endl;
	cout<<"Tail:"<<b<<endl;
	return 0;
}
