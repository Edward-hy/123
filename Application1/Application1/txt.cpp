#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ofstream openfile("d:\\���ݵ�.txt", ios::app);
	if (!openfile)
	{
		cout << "���������޷������ļ�";
		system("pause");
		return 0;
	}

	openfile << "������" << endl;
	openfile << "��ַ��" << endl;
	openfile.close();
	return  1;
}
