#include<iostream>
using namespace std;
template <typename T>
T maximum(T a,T b)
{
	return a<b?b:a;
}
int main()
{
	int a,b;
	cout<<"Enter 2 int"<<endl;
	cin>>a>>b;
	cout<<minimum(a,b)endl;
	char c,d;
	cout<<"Enter 2 char"<<endl;
	cin>>c>>d;
	cout<<minimum(c,d)<<endl;
	float e,f;
	cout<<"Enter 2 float"<<endl;
	cin>>e>>f;
	cout<<minimum(e,f);
	
	
	return 0;
}
