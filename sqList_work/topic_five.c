#define _CRT_SECURE_NO_WARNINGS 1

#include "topic.h"

bool Del_BetweenElem_unsort(SqList* L, int begin, int end)
{//begin<end   L����Ϊ��   L��һ�������
	if (begin >= end || !L->length)
		return false;
	int i = 0;
	int k = 0;//������¼��Ҫɾ�������Ķ���
	for (i = 0; i < L->length; i++)
	{
		if (L->data[i] < begin || L->data[i] > end)
		{
			
			L->data[k] = L->data[i];
			k++;
		}
	}
	if (!k)
		return false;
	L->length = k;
	return true;
	
}