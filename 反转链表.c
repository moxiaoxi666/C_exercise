#include "SList.h"
SListNode* BuyListNode(int x)
{
	SListNode* NewNode =(SListNode*) malloc(sizeof(SListNode));
	if (NewNode == NULL)
	{
		printf("���ٽڵ�ʧ��\n");
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
		printf("������Ϊ��\n");
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
			//��ת
			n2->next = n1;
			//����
			n1 = n2;
			//n3��Ϊ�˼�¼n2����һ��ֵ
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
		//ͷ��
		cur->next = newNode;
		//����
		newNode = cur;
		cur = next;
		if(next)
		next = next->next;
	}
	*pphead = newNode;
}