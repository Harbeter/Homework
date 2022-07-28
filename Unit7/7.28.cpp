#include<iostream>
#include<array>
using namespace std;
bool testPalindrome(string a,int left,int right)
{
	if(left==right||left==right+1)
	{
		return 1;
	}
	else
	{
		if(a[left]!=a[right])
		{
			return 0;
		}
		return testPalindrome(a,left+1,right-1);
	}
}
int main()
{
	string a;
	getline(cin,a);
	if(testPalindrome(a,0,a.size()-1))
	{
		cout<<"true"<<endl;
	}
	else
	{
		cout<<"false"<<endl;
	}
	return 0;
}
