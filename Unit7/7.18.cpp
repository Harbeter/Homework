#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	int a,b;
	int c=0,d=0;
	srand(time(0));
	for(int i=0;i<1000;i++)
	{
		a=rand()%6+1;
		b=rand()%6+1;
		if(a>b)
		c++;
		cout<<"The "<<i+1<<"time: win "<<c<<endl;
		if(a<b)
		d++;
		cout<<"The "<<i+1<<"time: lose "<<d<<endl;
	}
	//This game is fair,because the rate of win and the rate of lose is equit;
	
	return 0;
}
