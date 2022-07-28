#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>
using namespace std;

class Card
{
private:
	int face;
	int suit;
	static string faces;
	static string suits;
public:
	Card(int f,int s);
	void toString();
};

class DeckOfCards
{
private:
	vector<Card> deck;
	int currentCard;
public:
	DeckOfCards(int n);
	void shuffle();
	
};
string Card::faces="";
string Card::suits="";
int main()
{
	srand(time(0));
	return 0;
}
Card::Card(int f,int s)
{
	this->face=f;
	this->suit=s;
}
void Card::toString()
{
	cout<<this->face<<"of"<<this->suit<<endl;
}
DeckOfCards::DeckOfCards(int n)
{
	int f,s;
	while(n--)
	{
		cin>>f>>s;
		Card t(f,s);
		this->deck.push_back(t);
	}
	
}
void DeckOfCards::shuffle()
{
	for(int i=0;i<this->deck.size();i++)
	{
		int t=rand()%deck.size();
		swap(this->deck[i],this->deck[t]);
	}
}
