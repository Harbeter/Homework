#include<iostream>
using namespace std;
int a=99;
int main()
{
	//这里的一元作用域运算符是指::
	//主要作用是调用全局变量的值
	int a=50;
	cout<<"The a in the main:"<<a<<endl;
	cout<<"The a in the global:"<<::a<<endl;
	return 0;
}
