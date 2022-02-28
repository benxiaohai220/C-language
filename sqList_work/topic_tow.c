#define _CRT_SECURE_NO_WARNINGS 1

#include "topic.h"

void ListInverted(SqList* L)
{//将顺序表中的所有元素逆置（高效）
	//要求算法的空间复杂度为：O(1)--->意思是无论输入数据的长度多大，占用内存不变
	int temp = 0;//临时变量
	int i = 0;
	int j = 0;
	for (i = 0; i < L->length>>1; i++)
	{
		temp = L->data[i];
		L->data[i] = L->data[L->length - i - 1];
		L->data[L->length - i - 1] = temp;
	}
}