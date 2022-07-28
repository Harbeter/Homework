#include<iostream>
#include<vector>
#include<array>
using namespace std;
class IntegerSet
{
private:
	vector<bool> a;
public:
	IntegerSet();
	void insertValue(int n);
	IntegerSet unionOfSets(IntegerSet b);
	IntegerSet intersectionOfSets(IntegerSet b);
	void printSet();
	void insertElement(int i);
	bool isEqualTo(IntegerSet);
	IntegerSet(int a[],int n);
};
int main()
{
	IntegerSet a;
	a.insertValue(5);
	IntegerSet b;
	b.insertValue(5);
	IntegerSet c=a.unionOfSets(b);
	c.printSet();
	return 0;
}


IntegerSet::IntegerSet()
{
	this->a.resize(101);
	for(int i=0;i<a.size();i++)
	{
		a[i]=false;
	}
}
void IntegerSet::insertValue(int n)
{
	int t;
	for(int i=0;i<n;i++)
	{
		cin>>t;
		this->a[t]=true;
	}
}
IntegerSet IntegerSet::unionOfSets(IntegerSet b)
{
	IntegerSet c;
	for(int i=0;i<this->a.size();i++)
	{
		if(this->a[i]==true||b.a[i]==true)
		{
			c.a[i]=true;
		}
	}
	return c;
}
IntegerSet IntegerSet::intersectionOfSets(IntegerSet b)
{
	IntegerSet c;
	for(int i=0;i<this->a.size();i++)
	{
		if(this->a[i]==true&&b.a[i]==true)
		{
			c.a[i]=true;
		}
	}
	return c;
}
void IntegerSet::printSet()
{
	bool flag=0;
	for(int i=0;i<101;i++)
	{
		if(this->a[i]==true)
		{
			cout<<i<<" ";
			flag=1;
		}
	}
	if(flag==0)
	{
		cout<<"---"<<endl;
	}
	cout<<endl;
}
void IntegerSet::insertElement(int i)
{
	this->a[i]=true;
}
bool IntegerSet::isEqualTo(IntegerSet b)
{
	bool flag=0;
	for(int i=0;i<101;i++)
	{
		if(this->a[i]!=b.a[i])
		flag=1;
	}
	if(flag==1)
	{
		return false;
	}
	else
	{
		return true;
	}
}
IntegerSet::IntegerSet(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		this->a[a[i]]=true;
	}
}
