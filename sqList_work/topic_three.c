#define _CRT_SECURE_NO_WARNINGS 1

#include "topic.h"

bool Del_Elem(SqList* L,int del_target)
{//��¼˳����е���del_target�ĸ�������ɨ���L���߼�¼k�����������ڵ���ǰ�ƶ�k
	int k = 0;
	int i = 0;
	for (i = 0; i < L->length; i++)
	{
		if (del_target == L->data[i])
			k++;
		else
			L->data[i] = L->data[i + k];
	}
	if (!k)
		return false;
	L->length -= k;
	return true;
	
}

//bool Del_Elem(SqList* L, int del_target)
//{//ʱ�临�Ӷ�ΪO(n)--->�൱��ֻ����һ��forѭ��
//	//�ռ临�Ӷ�ΪO(1)--->�൱����ָ��
//	int k = 0;//��¼������Ҫɾ��Ԫ�صĸ���
//	int i = 0;
//	for (i = 0; i < L->length; i++)
//	{
//		if (del_target != L->data[i])
//		{
//			L->data[k] = L->data[i];
//			k++;
//		}
//	}
//	if (k == L->length)
//		return false;
//	L->length = k;
//	return true;
//}

//bool Del_Elem(SqList* L, int del_target)
//{//����д���㷨����Ч�����һ����ܽ�ȫ����del_targetɾ����ֻ��ɾ����һ����һ��ֻ��ɾ��һ��
//	int i = 0;
//	int pos = 0;
//	int j = 0;
//	for (i = 0; i < L->length; i++)
//	{
//		if (L->data[i] == del_target)
//		{
//			pos = i;
//			L->length--;
//			break;
//		}
//	}
//	for (j = pos; j < L->length; j++)
//	{
//		L->data[j] = L->data[j + 1];
//	}
//	if (!pos)
//		return false;
//	return true;
//}