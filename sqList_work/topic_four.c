#define _CRT_SECURE_NO_WARNINGS 1
#include "topic.h"
bool Del_BetweenElem_sort(SqList* L, int begin, int end)
{//begin<end
	if (begin >= end || !L->length)
		return false;
	//L��һ�������˳���
	int i = 0;
	int pos = 0;//������¼��һ����Ҫɾ��Ԫ�ص��±�
	int k = 0;//������ɾ�������ĸ��������
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