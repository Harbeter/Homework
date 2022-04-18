#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	int a,s;
	srand(time(0));
	flag:
	cout<<"I have a number between 1 and 1000."<<endl;
	cout<<"Can you guess my number?"<<endl;
	cout<<"Please type your first guess."<<endl;
	a=rand()%1001;
	while(1)
	{
		cin>>s;
		if(s>a)
		cout<<"Too high.Try again."<<endl;
		else if(s<a)
		cout<<"Too low.Try again."<<endl;
		else if(s==a)
		{
			cout<<"Excellent! You guessed the number!"<<endl;
			cout<<"Would you like to play again(y or n)?"<<endl;
			char p;
			cin>>p;
			if(p=='n')
			break;
			goto flag;
		}
	}
	return 0;
}
