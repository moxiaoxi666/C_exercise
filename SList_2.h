#define _CRT_SECURE_NO_WARNINGS 1
typedef struct SListNode
{
	int val;
	//��������Ӧ����д����,Ҫע�ⶨ����Ч�ķ�Χ
	struct SListNode* next;
}SListNode;
#include <stdio.h>
#include <stdlib.h>
void SListPushBack(SListNode** pphead,int x);
void SListPrint(SListNode** pphead);
//һ��ֵ�ָ�����,�������Ӻ����
SListNode* partition(SListNode* pHead, int x);