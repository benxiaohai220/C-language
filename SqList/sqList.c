#define _CRT_SECURE_NO_WARNINGS 1

/*
	线性表：

	结构：除了表头元素和表尾元素外，每一个元素都有且只有一个直接前驱和直接后继

	特点：1.有序 2.数据元素有限 3.数据元素的数据类型都相同
*/

/*
	顺序表（线性表的顺序存储）：

	特点：表中元素的逻辑顺序和物理顺序相同（使用一组地址连续的存储单元依次存储线性表中的数据元素）

	注：顺序表通常用数组来描述
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