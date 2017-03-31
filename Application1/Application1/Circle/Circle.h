#ifndef __CIRCLE_H__
#define __CIRCLE_H__

#include<iostream>
#define OK 1  
#define pi 3.14  
using namespace std;

class Circle
{
public:
	Circle(int radius)
	{
		Radius = radius;
	}
	Circle(Circle &C);
	~Circle();

	int GetR()
	{
		return Radius;
	}
	int GetArea() const;

private:
	int Radius;
};

Circle::Circle(Circle &C)
{
	C.Radius = Radius;
}
Circle::~Circle()
{
	cout << "Îö¹¹º¯ÊýÖ´ÐÐ ";
	system("pause");
}

#endif //__CIRCLE_H__
