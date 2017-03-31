#include <ctype.h>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;
#include "Binary_Tree.h"
//递归函数
int ComputeValue(Binary_Tree<string> *pRoot)
{
	if (NULL == pRoot)
	{
		cout << "叶结点数据有错误!" << endl;
		return 0;
	}
	string RootValue = pRoot->get_data();
	bool blnIsDigit = true;
	for (unsigned int i = 0; i < RootValue.length(); i++)
	{
		if (!isdigit(RootValue[i]))
		{
			blnIsDigit = false;
			break;
		}
	}
	//如果"根"是整数,则直接返回
	if (blnIsDigit)
	{
		return atoi(RootValue.c_str());
	}
	else
	{
		//用递归方法计算左右子树的和
		int leftValue = ComputeValue(&(pRoot->get_left_subtree()));
		int rightValue = ComputeValue(&(pRoot->get_right_subtree()));
		if ("+" == RootValue)
		{
			return leftValue + rightValue;
		}
		else if ("-" == RootValue)
		{
			return leftValue - rightValue;
		}
		else if ("*" == RootValue)
		{
			return leftValue * rightValue;
		}
		else if ("/" == RootValue)
		{
			return leftValue / rightValue;
		}
		else
		{
			cout << "此操作符错误 [" << RootValue << "]" << endl;
			return 0;
		}
	}
}
int main(void)
{
	Binary_Tree<string> TreeRoot;
	ifstream fs(L"c:\\数据文件.txt", ios_base::in);
	//从文件中获取数据
	TreeRoot = TreeRoot.read_binary_tree(fs);
	fs.close();
	//调用递归函数
	int Value = ComputeValue(&TreeRoot);
	cout << "最后计算结果为:" << Value << endl;
	getchar();
	return 0;
}