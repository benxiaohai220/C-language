#define _CRT_SECURE_NO_WARNINGS 1
#include "topic.h"

int SqList_minDelete_one(SqList* L)//�˷���ʱ��������ֵ��ֻ�ܷ���һ��ֵ���������ò������أ����ض��
{//ɾ��������СԪ�ص�ֵ�����ҷ��ر�ɾԪ�ص�ֵ
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
	if (!L->length)//���ж�˳����Ƿ�Ϊ��
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
