#define _CRT_SECURE_NO_WARNINGS 1

#include "sqList.h"

void Init_sqList(SqList* L)
{
	L->data = (int*)malloc(sizeof(int)*InitSize);
	L->length = 0;
}

int sqList_length(SqList* L)
{
	return L->length;
}

bool sqList_Insert(SqList* L,int i,int elem)
{
	int j = 0;
	for (j = L->length; j >=i; j--)
	{
		L->data[j] = L->data[j - 1];
	}
	L->data[i-1] = elem;
	L->length++;
	return true;
}

int sqList_len(SqList L)
{
	return L.length;
}