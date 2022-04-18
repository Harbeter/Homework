#include<iostream>
#include<array>
#include<ctime>
using namespace std;
int main()
{
	array<array<int,5>,3> a={2,4,6,8,10,3,5,7,9,11,6,10,21,18,22};
	srand(time(0));
	int b=rand()%3;
	for(int i=0;i<5;i++)
	{
		cout<<a[b][i]<<" ";
	}
	
	return 0;
}
