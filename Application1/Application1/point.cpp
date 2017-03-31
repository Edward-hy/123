#include<iostream>
using namespace std;

void test(int *&p)
{
	int a = 1;
	p = &a;
	cout << p << " " << *p << endl;
}

int main(void)
{
	int *p = NULL;
	test(p);
	if (p != NULL)
		cout << "Ö¸Õëp²»ÎªNULL" << endl;
	system("pause");
	return 0;
}