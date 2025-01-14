#include "SList_2.h"
SListNode* BuySListNode(int x)
{
	SListNode* newNode = (SListNode*)malloc (sizeof(SListNode));
	if (newNode == NULL)
	{
		printf("该节点创建失败\n");
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
		printf("该链表为空\n");
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
        return NULL; // 正确：当输入头指针为空时返回 NULL 指针
    }
    SListNode* lessHead, * lessTail;
    SListNode* greaterHead, * greaterTail;
    lessHead = lessTail = (SListNode*)malloc(sizeof(SListNode));
    greaterHead = greaterTail = (SListNode*)malloc(sizeof(SListNode));
    // 检查内存分配是否成功
    if (lessHead == NULL || greaterHead == NULL)
    {
        free(lessHead);
        free(greaterHead);
        return NULL; // 内存分配失败，释放已分配的内存并返回 NULL
    }
    // 不把尾指向 NULL 是因为没有必要
    SListNode* cur = pHead;
    while (cur)
    {
        // 尾插
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
    // 确定真正的头和尾
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
//	//不把尾指向NULL是因为没有必要
//	SListNode* cur = pHead;
//	while (cur)
//	{
//		//尾插
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
//	//确定真正的头和尾
//
//	SListNode* realHead = lessHead->next;
//	greaterTail->next = NULL;
//	if (lessHead && greaterHead)
//		lessTail->next = greaterHead->next;
//	free(lessHead);
//	free(greaterHead);
//	return  realHead;
//}
