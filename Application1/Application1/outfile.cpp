#include <iostream>
#include <fstream>
using namespace std;
int main()
{
//	int a[10];
	ofstream outfile("abc.txt", ios::out);
	if (!outfile)
	{
		cerr << "open error" << endl;
		return 0;
	}
	outfile << "��ã���ӭ������C++22������" << endl;
	system("pause");
	//outfile.close();

	return 1;
}
