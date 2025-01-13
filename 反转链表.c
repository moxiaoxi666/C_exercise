#include "SList.h"
SListNode* BuyListNode(int x)
{
	SListNode* NewNode =(SListNode*) malloc(sizeof(SListNode));
	if (NewNode == NULL)
	{
		printf("开辟节点失败\n");
		exit(-1);
	}
	NewNode->next = NULL;
	NewNode->val = x;
	return NewNode;

}
void SListPushBack(SListNode** pphead,int x)
{
	SListNode*newNode=BuyListNode(x);
	if (*pphead == NULL)
	{
		*pphead = newNode;
	}
	else
	{
		SListNode* tail = *pphead;
		while (tail->next!=NULL)
		{
			tail = tail->next;
		}
		tail->next = newNode;
	}
}
void SListPrint(SListNode** pphead)
{
	if (*pphead == NULL)
	{
		printf("该链表为空\n");
		return ;
	}
	else
	{
		SListNode* cur = *pphead;
		while (cur != NULL)
		{
			printf("%d->", cur->val);
			cur = cur->next;
		}
	}
	printf("NULL\n");
}
void reverseList1(SListNode** phead)
{
	SListNode* n1 = NULL, * n2 = *phead, * n3 = (*phead)->next;
	if (n2 == NULL || n3 == NULL)
	{
		return;
	}
	else
	{
		while (n2)
		{
			//反转
			n2->next = n1;
			//迭代
			n1 = n2;
			//n3是为了记录n2的下一个值
			n2 = n3;
			if(n3)
			n3 = n2->next;
		}
		*phead = n1;
	}
}
void reverseList2(SListNode** pphead)
{
	SListNode* newNode = NULL, * cur = *pphead;
	SListNode* next = (*pphead)->next;
	if (cur == NULL || next == NULL)
	{
		return ;
	}
	while (cur)
	{
		//头插
		cur->next = newNode;
		//迭代
		newNode = cur;
		cur = next;
		if(next)
		next = next->next;
	}
	*pphead = newNode;
}