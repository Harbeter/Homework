#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double x,y;
	cout<<"Enter x,y:"<<endl;
	cin>>x>>y;
	cout<<"ceil(x)="<<ceil(x)<<endl;//向上取整
	cout<<"cos(x)="<<cos(x)<<endl;
	cout<<"exp(x)="<<exp(x)<<endl;//e的x方
	cout<<"fabs(x)="<<fabs(x)<<endl;//x的绝对值
	cout<<"floor(x)="<<floor(x)<<endl;//向下取整
	cout<<"fmod(x,y)="<<fmod(x,y)<<endl;//x/y的浮点余数
	cout<<"log(x)="<<log(x)<<endl;//x以e为底数的自然对数
	cout<<"log10(x)="<<log(10)<<endl;//x以10为底数的自然对数 
	cout<<"pow(x,y)="<<pow(x,y)<<endl;
	cout<<"sin(x)="<<sin(x)<<endl;
	cout<<"sqrt(x)="<<sqrt(x)<<endl;
	cout<<"tan(x)="<<tan(x)<<endl;
	return 0;
}

