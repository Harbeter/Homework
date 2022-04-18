#include<iostream>
using namespace std;
int f1(int a,int b)
{
	int s=a/b;
	return s;
}
int f2(int a,int b)
{
	int s=a%b;
	return s;
}
void f3(int s)
{
	int i=0;
	int n;
	int a[5];
	while(1)
	{
		if(s!=0)
		{
			a[i]=s%10;
			s=s/10;
			i++;
		}
		else
		{
			n=i;
			break;
		}
		
	}
	for(int i=n-1;i>=0;i--)
	cout<<a[i]<<" ";
}
int main()
{
	int a,b;
	cout<<"Enter a and b:";
	cin>>a>>b;
	//a
	cout<<f1(a,b)<<endl;
	//b
	cout<<f2(a,b)<<endl;
	//c
	cout<<"Enter s:";
	int s;
	cin>>s;
	f3(s);
	
	return 0;
}
