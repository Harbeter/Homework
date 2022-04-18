#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	srand(time(0));
	int n;
	n=rand()%2+1;
	cout<<n<<endl;
	cout<<rand()%100+1<<endl;
	cout<<rand()%10<<endl;
	cout<<rand()%113+1000<<endl;
	cout<<rand()%3-1<<endl;
	cout<<rand()%15-3<<endl;
	return 0;
}
