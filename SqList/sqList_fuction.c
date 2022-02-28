#define _CRT_SECURE_NO_WARNINGS 1

#include "sqList_fuction.h"
void InitList(SqList* L)
{//��ʼ�����Ա�
	L->data = (char*)malloc(InitSize*sizeof(char));
	//assert(!L->data);
	if(!L->data)
	{
		exit(EXIT_FAILURE);//�������β��ǣ�zero or EXIT_SUCCESS��ʾ�ɹ����У��������ǣ�EXIT_FSILURE��ʾʧ��
	}
	L->length = 0;
}

int length(const SqList L)
{
	return L.length;
}

int LocateElem( SqList L,  char target)
{//����target�����ҵ�������target��˳����е�λ�ã�δ�ҵ�������-1
	int index = -1;
	int i = 0;
	for (i = 0; i < L.length; i++)
	{
		if (target == L.data[i])
			index = i+1;
	}
	return index;
}

char GetElem( SqList L, int i)
{//��i�����򷵻ص�i���ַ������򷵻�NULL
	if (i > L.length || i < 0)
		return (char)NULL;
	return L.data[i-1];
}

//bool ListInsert(SqList* L,int i,char target)
//{//�ڵ�iλ����ɹ��򷵻�true������ʧ���򷵻�false
//	if (i<1 || i>L->length + 1 || i > InitList)
//	{
//		return false;
//	}
//	int j = 0;
//	for (j=L->length ;j>=i;j--)
//	{
//		L->data[j] = L->data[j-1];
//	}
//	L->data[i - 1] = target;
//	L->length += 1;
//	return true;
//}
SqList ListInsert(SqList* L, int i, char target)
{//��i�������ڵ�i��Ԫ�ص�λ�ò�����Ԫ�أ���i��Ԫ�ؼ������Ԫ��������
	assert(i>0 && i<=L->length+1);
	assert(i < InitList);//assert()�ú����еı��ʽΪ�ٷ��ش���
	int j = 0;
	for (j = L->length; j >= i; j--)
	{
		L->data[ j ] = L->data[ j-1 ];
	}
	L->data[i-1] = target;
	L->length += 1;
	return *L;
}

//bool ListDelete(SqList* L, int i, char* elem)
//{//���ò�������ɾ���ɹ��򷵻�true,���򷵻�false
//	if (i<1 || i>L->length)
//		return false;
//  if(!L->length)
//		return false;
//	*elem = L->data[i - 1];
//	for (; i< L->length; i++)
//	{
//		L->data[i - 1] = L->data[i];
//	}
//	L->length -= 1;
//	return true;
//}
char* ListDelete(SqList* L,int i,char* elem)
{//���Ա��ɾ��������ɾ����i��Ԫ�أ�����ɾ����Ԫ�ر�����elem��
	assert(L->length);//���ʽΪ��ʱ�����ش���
	assert(i>=1 && i<=L->length);
	int j = 0;
	*elem = L->data[i - 1];
	for (j = i; j < L->length; j++)
	{
		L->data[j - 1] = L->data[j];
	}
	L->length -= 1;
	return elem;
}

bool Empty(SqList L)
{//�ж�˳����Ƿ�Ϊ�գ��ж����Ա�ĳ����Ƿ�Ϊ�㼴��
	if (!L.length)
		return false;
	return true;
}

void DestroyList(SqList* L)
{
	free(L);
}
void PrintList(SqList L)
{
	int i=0;
	for (i = 0; i < L.length; i++)
	{
		printf("%c ",L.data[i]);
	}
}