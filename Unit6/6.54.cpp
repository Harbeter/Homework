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
	//a templateû��Ҫ
	cout<<sum(12,23,45);
	//b û�з��أ�return ����
	//c Ҫ��Aǰ���һ��typename 
	cout<<product(1,56,3);
	//d û�б�ʾ��ȷ��˼ 
	return 0;
}
