#include<iostream>
using namespace std;
int main()
{
	int n=1;
	cout<<"N\t10*N\t100*N\t1000*N"<<endl;
	cout<<endl;
	while(n<=5)
	{
		cout<<n<<"\t"<<n*10<<"\t"<<n*100<<"\t"<<n*1000<<endl;
		n++;
	}
	return 0;
}
