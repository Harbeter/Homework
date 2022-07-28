#include<iostream>
using namespace std;
class Rectangle
{
private:
	float length;
	float width;
public:
	void setLength(float len=1);
	float getLength();
	void setWidth(float wid=1);
	float getWidth();
	float Area();
	float perimeter();
};
int main()
{
	
	return 0;
}
void Rectangle::setLength(float len)
{
	if(len>0&&len<20)
	this->length=len;
	else
	cout<<"Error"<<endl;
	
}
float Rectangle::getLength()
{
	return this->length;
}
void Rectangle::setWidth(float wid)
{
	if(wid>0&&wid<20)
	this->width=wid;
	else
	cout<<"Error"<<endl;
}
float Rectangle::getWidth()
{
	return this->width;
}
float Rectangle::Area()
{
	return this->length*this->width;
}
float Rectangle::perimeter()
{
	return 2*(this->length+this->width);
}
