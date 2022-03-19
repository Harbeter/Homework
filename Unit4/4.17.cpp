#include<iostream>
using namespace std;
int main()
{
	int counter=10;
	double number=-999999,largest;
	while(counter>=1)
	{
		cout<<"Enter nember pls:";
		cin>>number;
		
		if(number>largest)
		{
			largest=number;
		}
		counter--;
	}
	cout<<"The largest number is:"<<largest<<endl;
	return 0;
}
