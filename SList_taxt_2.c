#include "SList_2.h"
void text()
{
	SListNode* SList = NULL;
	SListPushBack(&SList,6);
	SListPushBack(&SList,2);
	SListPushBack(&SList,3);
	SListPushBack(&SList,3);
	SListPushBack(&SList,5);
	SListPushBack(&SList,6);
	SListPrint(&SList);
	//一定值分割链表,并以连接后输出
	SList=partition(SList,5);
	SListPrint(&SList);
}
int main()
{

	text();
	return 0;
}