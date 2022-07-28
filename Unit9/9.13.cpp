#include<iostream>
#include<stdexcept>
#include<array>
using namespace std;
class Rectangle
{
private:
	int x1,x2,x3,x4;
	int y1,y2,y3,y4;
public:
	void setPosition(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4)
	{
		
		if((x2-x1!=x3-x4)&&(y4-y1!=y3-y2))
		{
			throw invalid_argument("Error");
		}
		if(x1>=0&&x1<=20&&x2>=0&&y2<=20&&x3>=0&&y3<=20&&x4>=0&&y4<=20)
		{
			this->x1=x1;
			this->y1=y1;
			this->x2=x2;
			this->y2=y2;
			this->x3=x3;
			this->y3=y3;
			this->x4=x4;
			this->y4=y4;
		}
		else
		{
			throw invalid_argument("Error value");
		}
		
	}
	int getLength()
	{
		int len;
		len=this->x2-this->x1;
		int temp=this->y3-this->y2;
		return len>temp?len:temp;
	}
	int getWidth()
	{
		int wid;
		wid=this->x2-this->x1;
		int temp=this->y3-this->y2;
		return wid>temp?temp:wid;
	}
	int getArea()
	{
		return this->getLength()*this->getWidth();
	}
	int getPerimeter()
	{
		return 2*(this->getWidth()+this->getLength());
	}
	void print()
	{
		for(int i=0;i<=this->x2-this->x1;i++)
		{
			for(int j=0;j<=this->y3-this->y2;j++)
			{
				cout<<"*";
			}
			cout<<endl;
		}
	}
};
int main()
{
	cout<<"Please input from point1 to point4:"<<endl;
	cout<<"point4,point3\npoint1,point2"<<endl;
	int x1,x2,x3,x4,y1,y2,y3,y4;
	cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
	Rectangle a;
	a.setPosition(x1,y1,x2,y2,x3,y3,x4,y4);
	cout<<a.getArea()<<endl;
	cout<<a.getPerimeter()<<endl;
	a.print();
	return 0;
}
