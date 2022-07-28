#include<iostream>
#include<vector>
#include<stdexcept>
using namespace std;
class HugeInteger
{
private:
	vector<int> a;
public:
	void input(int n)
	{
		if(n>40)
		throw invalid_argument("");
		int t;
		while(n--)
		{
			cin>>t;
			a.push_back(t);
		}
	}
	void output()
	{
		for(auto i:a)
		{
			cout<<i<<" ";
		}
	}
	void add(int i,int n)
	{
		a[i-1]+=n;
	}
	void substract(int i,int n)
	{
		a[i-1]-=n;
	}
	bool isEqualTo(HugeInteger b)
	{
		if(this->a.size()==b.a.size())
		{
			int t=a.size();
			for(int i=0;i<t;i++)
			{
				if(a[i]!=b.a[i])
				return false;
			}
			return true;
		}
		return false;
	}
};
int main()
{
	HugeInteger a;
	HugeInteger b;
	a.input(5);
	b.input(5);
	cout<<a.isEqualTo(b);
	return 0;
}
