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
	cout << "���Ĭ��Բ�����Ϊ�� " << mycircle.GetArea() << endl;
	cout << "��������һ��Բ�İ뾶r = ";
	cin >> r;
	Circle youcircle(r);
	cout << "��ð뾶Ϊ " << r << " ��Բ�����Ϊ�� " << youcircle.GetArea() << endl;
	system("pause");
	return OK;
}