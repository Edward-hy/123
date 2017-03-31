#include"Circle.h"
#include<iostream>


int Circle::GetArea()const
{
	return pi*Radius*Radius;
}

int main()
{
	int r = 2;
	Circle mycircle(2);
	cout << "求得默认圆的面积为： " << mycircle.GetArea() << endl;
	cout << "请输入另一个圆的半径r = ";
	cin >> r;
	Circle youcircle(r);
	cout << "求得半径为 " << r << " 的圆的面积为： " << youcircle.GetArea() << endl;
	system("pause");
	return OK;
}