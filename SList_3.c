#include "SList_3.h"
SListNode* BuySListNode(int x)
{
	SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));
	if (newNode == NULL)
	{
		exit(-1);
	}
	else
	{
		newNode->next = NULL;
		newNode->val = x;
		return newNode;
	}
}
void SListPushBack(SListNode** ppHead, int x)
{
	SListNode* newNode = BuySListNode(x);
	if (*ppHead == NULL)
	{
		*ppHead = newNode;
	}
	else
	{
		SListNode* cur = *ppHead;
		while (cur->next)
		{
			cur = cur->next;
		}
		cur->next = newNode;
	}
}
void SListPrint(SListNode** ppHead)
{
	if (*ppHead == NULL)
	{
		printf("该链表为空\n");
		return;
	}
	else
	{
		SListNode* cur = *ppHead;
		while (cur)
		{
			printf("%d->", cur->val);
			cur = cur->next;
		}
		printf("NULL\n");
	}
}
//相交链表
SListNode* getIntersectionNode(SListNode* headA, SListNode* headB)
{
	//求出两个链表的长度
	SListNode* curA;
	int la = 0;
	while (curA)
	{
		la++;
		curA = curA->next;
	}
	SListNode* curB;
	int lb = 0;
	while (curB)
	{
		lb++;
		curB = curB->next;
	}
	SListNode* longList = headA;
	SListNode* shortList = headB;
	if (lb > la)
	{
		longList = headB;
		shortList = headA;
	}

	int gap = abs(la - lb);
	while (gap--)
	{
		longList = longList->next;
	}
	while (longList)
	{
		if (longList == shortList)
			return longList;
		else
		{
			longList = longList->next;
			shortList = shortList->next;
		}
	}
	return NULL;
}
//环形链表