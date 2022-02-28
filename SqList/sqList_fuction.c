#define _CRT_SECURE_NO_WARNINGS 1

#include "sqList_fuction.h"
void InitList(SqList* L)
{//初始化线性表
	L->data = (char*)malloc(InitSize*sizeof(char));
	//assert(!L->data);
	if(!L->data)
	{
		exit(EXIT_FAILURE);//函数的形参是：zero or EXIT_SUCCESS表示成功运行，当参数是：EXIT_FSILURE表示失败
	}
	L->length = 0;
}

int length(const SqList L)
{
	return L.length;
}

int LocateElem( SqList L,  char target)
{//查找target，若找到怎返回target在顺序表中的位置，未找到怎返回-1
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
{//若i合理则返回第i个字符，否则返回NULL
	if (i > L.length || i < 0)
		return (char)NULL;
	return L.data[i-1];
}

//bool ListInsert(SqList* L,int i,char target)
//{//在第i位插入成功则返回true，插入失败则返回false
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
{//若i合理，则在第i个元素的位置插入新元素，第i个元素及后面的元素往后移
	assert(i>0 && i<=L->length+1);
	assert(i < InitList);//assert()该函数中的表达式为假返回错误
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
//{//利用布尔类型删除成功则返回true,否则返回false
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
{//线性表的删除操作，删除第i个元素，并将删除的元素保留在elem中
	assert(L->length);//表达式为真时不返回错误
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
{//判断顺序表是否为空，判断线性表的长度是否为零即可
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