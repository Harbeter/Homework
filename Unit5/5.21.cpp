#include<iostream>
using namespace std;
int main()
{
	int n;
	int a,b,c;
	double s;
	cout<<"Enter the code[1(Manger)/2(Hourly worker)/3(Commission workers)/4(Piecework)]:"<<endl;
	cin>>n;
	switch(n)
	{
		case 1:
		cout<<"Enter time:"<<endl;
		cin>>a;
		cout<<"Enter wages:"<<endl;
		cin>>b;
		s=a*b;
		cout<<"The result is (Manger) "<<s;
		break;
		case 2:
		cout<<"Enter time:"<<endl;
		cin>>a;
		cout<<"Enter wages:"<<endl;
		cin>>b;
		if(a>40)
		{
			s=40*b+(a-40)*b*1.5;
		}
		else
		{
			s=a*b;
		}
		cout<<"The result is (Hourly worker) "<<s;
		break;
		case 3:
		cout<<"Enter time:"<<endl;
		cin>>a;
		cout<<"Enter gross profit on sales:";
		cin>>c;
		s=a*250+c*0.057;
		cout<<"The result is (Commission workers) "<<s;
		break;
		case 4:
		cout<<"Enter quantity:"<<endl;
		cin>>a;
		cout<<"Enter monovalent:"<<endl;
		cin>>b;
		s=a*b;
		cout<<"The result is (Piecework) "<<a*b;
		break;
	}
	return 0;
}
