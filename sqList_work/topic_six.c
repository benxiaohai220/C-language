#define _CRT_SECURE_NO_WARNINGS 1

#include"topic.h"

bool Del_RepeatElem(SqList* L)
{//�����   ɾ������ֵ�ظ���Ԫ��     ���еĸ���Ԫ�ض�����ͬ
	if (!L->length)
		return false;
	int i = 0;
	int k = 0; 
	for (i = 0; i < L->length; i++)
	{
		if (L->data[i] == L->data[i + 1])
			k++;
		else
			L->data[i-k]=L->data[i];
	}
	L->length -= k;
	return true;
}