#define _CRT_SECURE_NO_WARNINGS 1
typedef struct SListNode
{
	int val;
	//不能理所应当的写代码,要注意定义生效的范围
	struct SListNode* next;
}SListNode;
#include <stdio.h>
#include <stdlib.h>
void SListPushBack(SListNode** pphead,int x);
void SListPrint(SListNode** pphead);
//一定值分割链表,并以连接后输出
SListNode* partition(SListNode* pHead, int x);