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
	//�ɽ����֪���ݹ���׳��Ǵ�2��ʼ�˵� 
	return 0;
}

