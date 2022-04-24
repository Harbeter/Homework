#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
float cube(float number);
int sum(int a)
{
	if(a==0)
	return 0;
	else
	{
		return a+sum(a-1);
	}
}
//e:return那里应该是n+sum(n-1) 
int main()
{
	int a=5;
	cout<<sum(a)<<endl;
	return 0;
}
//d:去掉number=0 
//c:数据类型不一样 
//b:随机数种子不能当作随机数使用 
int main2()
{
	srand(time(0));
	int randomNumber=rand();
	cout<<randomNumber;
	return 0;
}
//a:function prototype and definition are wrong
int main1()
{
	float a=1.3;
	cout<<cube(a);
	return 0;
}
float cube(float number)
{
	return number*number*number;
}


