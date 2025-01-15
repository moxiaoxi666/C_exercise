#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
typedef struct SListNode
{
	int val;
	struct SListNode* next;
}SListNode;
#include <stdlib.h>
void SListPrint(SListNode** ppHead);
void SListPushBack(SListNode** ppHead, int val);