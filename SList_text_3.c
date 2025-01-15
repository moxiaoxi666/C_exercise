#include "SList_3.h"
void Test1()
{
	SListNode* SList1 = NULL;
	SListNode* SList2 = NULL;
	SListPushBack(&SList1, 6);
	SListPushBack(&SList1, 6);
	SListPushBack(&SList1, 6);
	SListPushBack(&SList1, 6);
	SListPushBack(&SList1, 6);
	SListPushBack(&SList1, 6);
	SListPrint(&SList1);

}
int main()
{
	Test1();
	return 0;
}