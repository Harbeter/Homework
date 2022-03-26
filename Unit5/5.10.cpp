#include<iostream>
using namespace std;
int main()
{
	
	int n,s=1;
	cin>>n;//n<20,or it will be error.
	cout<<"begin\t"<<"result\t"<<endl;
	for(int i=1;i<=n;i++)
	{
		s*=i;
	}
	cout<<n<<"\t"<<s<<"\t"<<endl;
	
	return 0;
}
