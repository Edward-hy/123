#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ofstream openfile("d:\\数据单.txt", ios::app);
	if (!openfile)
	{
		cout << "发生错误，无法生成文件";
		system("pause");
		return 0;
	}

	openfile << "姓名：" << endl;
	openfile << "地址：" << endl;
	openfile.close();
	return  1;
}
