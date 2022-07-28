#include<iostream>
#include<array>
using namespace std;
int main()
{
	array<array<int,5>,3> sales;
	for(size_t row=0;row<sales.size();++row)
	{
		for(size_t column=0;column<sales[row].size();++column)
		{
			sales[row][column]=0;
		}
	}
	return 0;
}
