#include<iostream>
using namespace std;
int main()
{
	unsigned int sum=0;
	unsigned int x=1;
	while(x<=10)
	{
		sum+=x;
		cout<<"The sum is: "<<sum<<endl;
		x++;
	}
	cout<<x;
	
	return 0;
}
