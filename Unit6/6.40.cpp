#include<iostream>
using namespace std;
int s(int a)
{
	if(a>1)
	{
		int b=a*s(a-1);
		cout<<b<<endl;
		return b;
	}
}
int main()
{
	int a;
	cin>>a;
	cout<<s(a);
	//由结果可知，递归算阶乘是从2开始乘的 
	return 0;
}

