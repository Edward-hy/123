#include<iostream>  
#define OK 1  
#define pi 3.14  
using namespace std;

class Circle
{
public:
	Circle(int radius) { Radius = radius; }
	Circle(Circle &C);
	~Circle() {}
	int GetR() { return Radius; }
	int GetArea() const;

private:
	int Radius;
};

Circle::Circle(Circle &C)
{
	C.Radius = Radius;
}

int Circle::GetArea() const
{
	return pi*Radius*Radius;
}

int main()
{
	int r;
	Circle mycircle(2);
	cout << "���Ĭ��Բ�����Ϊ�� " << mycircle.GetArea() << endl;

	cout << "��������һ��Բ�İ뾶r = ";
	cin >> r;
	Circle youcircle(r);
	cout << "��ð뾶Ϊ " << r << " ��Բ�����Ϊ�� " << youcircle.GetArea() << endl;
	system("pause");
	return OK;
}