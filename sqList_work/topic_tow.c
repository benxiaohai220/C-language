#define _CRT_SECURE_NO_WARNINGS 1

#include "topic.h"

void ListInverted(SqList* L)
{//��˳����е�����Ԫ�����ã���Ч��
	//Ҫ���㷨�Ŀռ临�Ӷ�Ϊ��O(1)--->��˼�������������ݵĳ��ȶ��ռ���ڴ治��
	int temp = 0;//��ʱ����
	int i = 0;
	int j = 0;
	for (i = 0; i < L->length>>1; i++)
	{
		temp = L->data[i];
		L->data[i] = L->data[L->length - i - 1];
		L->data[L->length - i - 1] = temp;
	}
}