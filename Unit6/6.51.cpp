#include<iostream>
using namespace std;
int a=99;
int main()
{
	//�����һԪ�������������ָ::
	//��Ҫ�����ǵ���ȫ�ֱ�����ֵ
	int a=50;
	cout<<"The a in the main:"<<a<<endl;
	cout<<"The a in the global:"<<::a<<endl;
	return 0;
}
