#include<iostream>
#include<array>
using namespace std;
class TicTacToe
{
private:
	array<array<int,3>,3> a;
public:
	TicTacToe()
	{
		this->a={};
	}
	void player1(int m,int n)
	{
		if(this->a[m-1][n-1]!=1&&this->a[m-1][n-1]!=2)
		this->a[m-1][n-1]=1;
		else
		cout<<"Error,try again"<<endl;
	}
	void player2(int m,int n)
	{
		if(this->a[m-1][n-1]!=2&&this->a[m-1][n-1]!=1)
		this->a[m-1][n-1]=2;
		else
		cout<<"Error,try again"<<endl;
	}
	bool judge()
	{
		//ÐÐ 
		for(int i=0;i<3;i++)
		{
			if(this->a[i][0]==this->a[i][1]&&this->a[i][1]==this->a[i][2])
			{
				if(this->a[i][0]==1)
				{
					cout<<"Player1 Wins"<<endl;
					return 0;
				}
				else if(this->a[i][0]==2)
				{
					cout<<"Player2 Wins"<<endl;
					return 0;
				}
			}
		}
		//ÁÐ
		for(int j=0;j<3;j++)
		{
			if(this->a[0][j]==this->a[1][j]&&this->a[1][j]==this->a[2][j])
			{
				if(this->a[0][j]==1)
				{
					cout<<"Player1 Wins"<<endl;
					return 0;
				}
				else if(this->a[0][j]==2)
				{
					cout<<"Player2 Wins"<<endl;
					return 0;
				}
			}
		}
		//Ð±Ïß
		if(this->a[0][0]==this->a[1][1]&&this->a[0][0]==this->a[2][2])
		{
			if(a[0][0]==1)
			{
				cout<<"Player1 Wins"<<endl;
				return 0;
			}
			else if(a[0][0]==2)
			{
				cout<<"Player2 Wins"<<endl;
				return 0;
			}
		}
		else if(this->a[0][2]==this->a[1][1]&&this->a[0][2]==this->a[2][0])
		{
			
			if(a[0][2]==1)
			{
				cout<<"Player1 Wins"<<endl;
				return 0;
			}
			else if(a[0][2]==2)
			{
				cout<<"Player2 Wins"<<endl;
				return 0;
			}
		}
		return 1;
	}
	void print()
	{
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				cout<<this->a[i][j]<<" ";
			}
			cout<<endl;
		}
	}
};
int main()
{
	TicTacToe a;
	int m,n;
	while(1)
	{
		cin>>m>>n;
		a.player1(m,n);
		a.print();
		if(!a.judge())
		return 0;
		cin>>m>>n;
		a.player2(m,n);
		a.print();
		if(!a.judge())
		return 0;
	}
	return 0;
}
