#include "SList.h"
void Text1()
{
	//²âÊÔ·´×ªÁ´±í
	SListNode* plist = NULL;
	SListPushBack(&plist,1);
	SListPushBack(&plist,2);
	SListPushBack(&plist,3);
	SListPushBack(&plist,4);
	SListPushBack(&plist,5);
	SListPrint(&plist);
	//reverseList1(&plist);
	reverseList2(&plist);
	SListPrint(&plist);
}

int main()
{
	Text1();
	return 0;
}