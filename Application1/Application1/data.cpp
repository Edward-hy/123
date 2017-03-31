#include <ctype.h>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;
#include "Binary_Tree.h"
//�ݹ麯��
int ComputeValue(Binary_Tree<string> *pRoot)
{
	if (NULL == pRoot)
	{
		cout << "Ҷ��������д���!" << endl;
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
	//���"��"������,��ֱ�ӷ���
	if (blnIsDigit)
	{
		return atoi(RootValue.c_str());
	}
	else
	{
		//�õݹ鷽���������������ĺ�
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
			cout << "�˲��������� [" << RootValue << "]" << endl;
			return 0;
		}
	}
}
int main(void)
{
	Binary_Tree<string> TreeRoot;
	ifstream fs(L"c:\\�����ļ�.txt", ios_base::in);
	//���ļ��л�ȡ����
	TreeRoot = TreeRoot.read_binary_tree(fs);
	fs.close();
	//���õݹ麯��
	int Value = ComputeValue(&TreeRoot);
	cout << "��������Ϊ:" << Value << endl;
	getchar();
	return 0;
}