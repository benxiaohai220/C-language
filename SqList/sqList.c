#define _CRT_SECURE_NO_WARNINGS 1

/*
	���Ա�

	�ṹ�����˱�ͷԪ�غͱ�βԪ���⣬ÿһ��Ԫ�ض�����ֻ��һ��ֱ��ǰ����ֱ�Ӻ��

	�ص㣺1.���� 2.����Ԫ������ 3.����Ԫ�ص��������Ͷ���ͬ
*/

/*
	˳������Ա��˳��洢����

	�ص㣺����Ԫ�ص��߼�˳�������˳����ͬ��ʹ��һ���ַ�����Ĵ洢��Ԫ���δ洢���Ա��е�����Ԫ�أ�

	ע��˳���ͨ��������������
*/
#include "sqList_fuction.h"

int main()
{
	char e=0;
	char* elem =NULL;
	int i = 0;
	char arr[] = {'a','b','c','d'};
	SqList L;
	InitList(&L);
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]);i++)
	{
		L = ListInsert(&L, i+1, arr[i]);
	}
	for (i = 0; i < L.length; i++)
	{
		printf("%c ", L.data[i]);
	}
	printf("\n");
	printf("%d\n",length(L));
	printf("%d\n",LocateElem(L,'d'));
	printf("%c\n", GetElem(L,2));
	elem=ListDelete(&L, 2,&e);
	printf("%c\n",e);
	printf("%c\n",*elem);
	printf("\n");
	PrintList(L);
	return 0;
}