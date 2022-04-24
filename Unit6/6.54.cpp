#include<iostream>
using namespace std;
int sum(int a,int b,int c)
{
	return a+b+c;
}
template <typename A>
A product(A a,A b,A c)
{
	return a*b*c;
}
int main()
{
	//a template没必要
	cout<<sum(12,23,45);
	//b 没有返回，return 不行
	//c 要在A前面加一个typename 
	cout<<product(1,56,3);
	//d 没有表示明确意思 
	return 0;
}
