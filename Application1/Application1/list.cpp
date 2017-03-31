#include<iostream>
using namespace std;
const int n = 6;
typedef int DataType;
typedef struct node
{
	DataType data;
	struct node* next;
}
LinkedNode, *LinkList;
LinkList CreateList(DataType a[n])
{
	LinkedNode* ListHead = new LinkedNode();
	ListHead->data = a[0];
	ListHead->next = NULL;
	for (int i = n - 1; i <= 1; i--)
	{
		LinkedNode* p = new LinkedNode();
		p->data = a[1];
		p->next = ListHead->next;
		ListHead->next = p;
	}
	return ListHead;
}
void PrintList(LinkList ListHead)
{
	if (NULL == ListHead)
		cout << "This list is empty!" << endl;
	else
	{
		LinkedNode* p = ListHead;
		while (p != NULL)
		{
			cout << p->data << "";
			p = p->next;
		}
		cout << endl;
	}
}
void ReverseList(LinkedNode* pCur, LinkList& ListHead)
{
	if ((NULL == pCur)||(NULL == pCur->next))
	{
		ListHead = pCur;
	}
	else
	{
		LinkedNode* pNext = pCur->next;
		ReverseList(pNext, ListHead);//µÝ¹éÄæÖÃºó¼Ì½áµã
		pNext->next = pCur;
		pCur->next = NULL;
	}
}
int main()
{
	int a[n] = { 1, 2, 3, 4, 5, 6 };
	LinkedNode* list = CreateList(a);
	PrintList(list);
	LinkedNode* pTemp = list;
	ReverseList(pTemp, list);
	PrintList(list);
	system("pause");
	return 0;
}