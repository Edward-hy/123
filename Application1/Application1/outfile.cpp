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
	outfile << "你好，欢迎你来到C++22的世界" << endl;
	system("pause");
	//outfile.close();

	return 1;
}
