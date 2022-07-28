#include<iostream>
#include<array>
using namespace std;
void printArray(array<int,6> a,int left,int right)
{
	if(left==right)
	{
		cout<<a[left]<<" ";
	}
	else
	{
		cout<<a[left]<<" ";
		printArray(a,left+1,right);
	}
}
int main()
{
	array<int,6> a={1,2,66,4,5,6};
	printArray(a,0,a.size()-1);
	return 0;
}
