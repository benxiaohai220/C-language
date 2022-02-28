#define _CRT_SECURE_NO_WARNINGS 1
#include "topic.h"
bool Del_BetweenElem_sort(SqList* L, int begin, int end)
{//begin<end
	if (begin >= end || !L->length)
		return false;
	//L是一个有序的顺序表
	int i = 0;
	int pos = 0;//用来记录第一个将要删除元素的下标
	int k = 0;//将满足删除条件的个数求出来
	for (i = 0; i < L->length; i++)
	{
		if (L->data[i] > begin && L->data[i] < end)
		{
			k++;
			if (k==1)
				pos = i;
		}
	}
	if (!k)
		return false;
	for (i = pos; i < pos + k; i++)
	{
		L->data[i] = L->data[i + k];
	}
	L->length -= k;
	return true;

}