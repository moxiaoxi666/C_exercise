#define _CRT_SECURE_NO_WARNINGS 1
typedef struct ListNode
{
	int val;
	struct ListNode* next;
}SListNode;
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
void SListPushBack(SListNode **pphead,int x);
void SListPrint(SListNode** pphead);
//Á´±í·´×ª
void reverseList1(SListNode** phead);
void reverseList2(SListNode** phead);