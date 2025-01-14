#include "SList_2.h"
SListNode* BuySListNode(int x)
{
	SListNode* newNode = (SListNode*)malloc (sizeof(SListNode));
	if (newNode == NULL)
	{
		printf("�ýڵ㴴��ʧ��\n");
		exit(-1);
	}
	newNode->next = NULL;
	newNode->val = x;
	return newNode;
}
void SListPushBack(SListNode** pphead,int x)
{
	SListNode* newNode = BuySListNode(x);
	if (*pphead == NULL)
	{
		*pphead = newNode;
	}
	else
	{
		SListNode* cur = *pphead;
		while (cur->next!=NULL)
		{
			cur = cur->next;
		}
		cur->next = newNode;
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
		while (cur)
		{
			printf("%d->", cur->val);
			cur = cur->next;
		}
		printf("NULL\n");
	}
}
SListNode* partition(SListNode* pHead, int x)
{
    if (pHead == NULL)
    {
        return NULL; // ��ȷ��������ͷָ��Ϊ��ʱ���� NULL ָ��
    }
    SListNode* lessHead, * lessTail;
    SListNode* greaterHead, * greaterTail;
    lessHead = lessTail = (SListNode*)malloc(sizeof(SListNode));
    greaterHead = greaterTail = (SListNode*)malloc(sizeof(SListNode));
    // ����ڴ�����Ƿ�ɹ�
    if (lessHead == NULL || greaterHead == NULL)
    {
        free(lessHead);
        free(greaterHead);
        return NULL; // �ڴ����ʧ�ܣ��ͷ��ѷ�����ڴ沢���� NULL
    }
    // ����βָ�� NULL ����Ϊû�б�Ҫ
    SListNode* cur = pHead;
    while (cur)
    {
        // β��
        if (cur->val < x)
        {
            lessTail->next = cur;
            lessTail = lessTail->next;
        }
        else
        {
            greaterTail->next = cur;
            greaterTail = greaterTail->next;
        }
        cur = cur->next;
    }
    // ȷ��������ͷ��β
    SListNode* realHead = lessHead->next;
    greaterTail->next = NULL;
    if (lessHead && greaterHead)
        lessTail->next = greaterHead->next;
    free(lessHead);
    free(greaterHead);
    return  realHead;
}



//SListNode* partition(SListNode* pHead, int x)
//{
//	if (pHead == NULL)
//	{
//		return;
//	}
//	SListNode* lessHead, * lessTail;
//	SListNode* greaterHead, * greaterTail;
//	lessHead = lessTail = (SListNode*)malloc(sizeof(SListNode));
//	greaterHead = greaterTail = (SListNode*)malloc(sizeof(SListNode));
//	if (lessHead != NULL || greaterHead != NULL)
//	{
//		return NULL;
//	}
//	//����βָ��NULL����Ϊû�б�Ҫ
//	SListNode* cur = pHead;
//	while (cur)
//	{
//		//β��
//		if (cur->val < x)
//		{
//			lessTail->next = cur;
//			lessTail = lessTail->next;
//		}
//		else
//		{
//			greaterTail->next = cur;
//			greaterTail = greaterTail->next;
//		}
//		cur = cur->next;
//	}
//	//ȷ��������ͷ��β
//
//	SListNode* realHead = lessHead->next;
//	greaterTail->next = NULL;
//	if (lessHead && greaterHead)
//		lessTail->next = greaterHead->next;
//	free(lessHead);
//	free(greaterHead);
//	return  realHead;
//}
