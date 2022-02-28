#define _CRT_SECURE_NO_WARNINGS 1
#include "topic.h"

int SqList_minDelete_one(SqList* L)//此方法时函数返回值，只能返回一个值，还可以用参数返回，返回多个
{//删除表中最小元素的值，并且返回被删元素的值
	assert(L->length);
	int temp =L->data[0];
	int i = 0;
	int pos = 0;
	for (i = 1; i < L->length; i++)
	{
		if (temp > L->data[i])
		{
			temp = L->data[i];
			pos = i;
		}
	}
	L->data[pos] = L->data[L->length - 1];
	L->length -= 1;
	return temp;
}

bool SqList_minDelete_two(SqList* L, int* temp)
{
	if (!L->length)//先判断顺序表是否为空
	{
		return false;
	}
	*temp = L->data[0];
	int pos = 0;
	int i = 0;
	for (i = 1; i < L->length; i++)
	{
		if (*temp > L->data[i])
		{
			*temp = L->data[i];
			pos = i;
		}
	}
	L->data[pos] = L->data[L->length - 1];
	L->length--;
	return true;
}
