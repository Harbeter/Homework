#include<iostream>
using namespace std;
int main()
{
	int x=5,y=8;
	//a
	cout<<"a)"<<endl;
	if(y==8)
	{
		if(x==5)
		{
			cout<<"@@@@@"<<endl;
		}
		
	}
	
	else
	{
		cout<<"#####"<<endl;
	}
	cout<<"$$$$$"<<endl;
	cout<<"&&&&&"<<endl;
	
	//b
	cout<<"b)"<<endl;
	if(x==5) 
	{
		if(y==8)
		{
			cout<<"@@@@@"<<endl;
		}
	}
	else
	{
		cout<<"#####"<<endl;
		cout<<"$$$$$"<<endl;
		cout<<"&&&&&"<<endl;
	}
	//c
	cout<<"c)"<<endl;
	if(x==5)
	{
		if(y==8)
		{
			cout<<"@@@@@"<<endl;
		}
	}
	else
	{
		cout<<"#####"<<endl;
		cout<<"$$$$$"<<endl;
	}
	cout<<"&&&&&"<<endl;
	//d
	cout<<"d)"<<endl;
	x=5,y=7;
	if(x==5)
	{
		if(y==8)
		{
			cout<<"@@@@@"<<endl;
		}
		else
		{
			cout<<"#####"<<endl;
			cout<<"$$$$$"<<endl;
			cout<<"&&&&&"<<endl;
		}
	}
	
	
	return 0;
}
